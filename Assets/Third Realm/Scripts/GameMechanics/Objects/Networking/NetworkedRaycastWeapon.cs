using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Audio;

using Photon.Pun;

using BNG;

using ThirdRealm.Utils;

namespace ThirdRealm.GameMechanics
{
	public class NetworkedRaycastWeapon : RaycastWeapon
	{
		public bool destroyProjectileAfterTimeout = true;

		[SerializeField]
		private AudioMixerGroup _audioMixerGroup = null;

		protected PhotonView photonView;

		public override void Start()
		{
			photonView = GetComponent<PhotonView>();

			base.Start();
		}

		public override void Shoot()
		{
			if (!photonView.IsMine)
				return;

			// Has enough time passed between shots
			float shotInterval = Time.timeScale < 1 ? SlowMoRateOfFire : FiringRate;

			if (Time.time - lastShotTime < shotInterval)
				return;

			// Need to Chamber round into weapon
			if (!BulletInChamber && MustChamberRounds)
			{
				// Only play empty sound once per trigger down
				if (!playedEmptySound)
				{
					photonView.RPC("RPC_PlaySpatialAudio", RpcTarget.AllBuffered, 1, transform.position, EmptySoundVolume);
					playedEmptySound = true;
				}

				return;
			}

			// Need to release slide
			if (ws != null && ws.LockedBack)
			{
				photonView.RPC("RPC_PlaySpatialAudio", RpcTarget.AllBuffered, 1, transform.position, EmptySoundVolume);
				return;
			}

			// Create our own spatial clip
			photonView.RPC("RPC_PlaySpatialAudio", RpcTarget.AllBuffered, 0, transform.position, GunShotVolume);

			// Haptics
			if (thisGrabber != null)
				input.VibrateController(0.1f, 0.2f, 0.1f, thisGrabber.HandSide);

			if (AlwaysFireProjectile)
			{
				GameObject projectile = PhotonNetwork.Instantiate(ProjectilePrefab.name, MuzzlePointTransform.position, MuzzlePointTransform.rotation);

				Rigidbody projectileRigid = projectile.GetComponentInChildren<Rigidbody>();
				projectileRigid.AddForce(MuzzlePointTransform.forward * ShotForce, ForceMode.VelocityChange);

				// Make sure we clean up this projectile
				if (destroyProjectileAfterTimeout)
					StartCoroutine(NetworkUtils.Destroy(projectile, 10f));
			}
			else
				if (Physics.Raycast(MuzzlePointTransform.position, MuzzlePointTransform.forward, out RaycastHit hit, MaxRange, ValidLayers, QueryTriggerInteraction.Ignore))
					OnRaycastHit(hit);

			// Apply recoil
			if (RecoilForce != Vector3.zero)
				ApplyRecoil();

			// We just fired this bullet
			BulletInChamber = false;

			// Try to load a new bullet into chamber         
			if (AutoChamberRounds)
				chamberRound();
			else
				EmptyBulletInChamber = true;

			// Unable to chamber bullet, force slide back
			if (!BulletInChamber)
				if (SlideTransform)
				{
					// Do we need to force back the receiver?
					slideForcedBack = ForceSlideBackOnLastShot;

					if (slideForcedBack && ws != null)
						ws.LockBack();
				}

			// Call Shoot Event
			if (onShootEvent != null)
				onShootEvent.Invoke();

			// Store our last shot time to be used for rate of fire
			lastShotTime = Time.time;

			// Stop previous routine
			if (shotRoutine != null)
			{
				MuzzleFlashObject?.SetActive(false);
				StopCoroutine(shotRoutine);
			}

			if (AutoChamberRounds)
			{
				shotRoutine = animateSlideAndEject();

				StartCoroutine(shotRoutine);
			}
			else
			{
				shotRoutine = doMuzzleFlash();
				StartCoroutine(shotRoutine);
			}
		}

		public override void OnRaycastHit(RaycastHit hit)
		{
			ApplyParticleFX(hit.point, Quaternion.FromToRotation(Vector3.forward, hit.normal), hit.collider);

			// push object if rigidbody
			Rigidbody hitRigid = hit.collider.attachedRigidbody;

			if (hitRigid != null)
				hitRigid.AddForceAtPosition(BulletImpactForce * MuzzlePointTransform.forward, hit.point);

			// Damage if possible
			var d = hit.collider.GetComponent<NetworkedDamageable>();

			if (d)
			{
				d.DealDamage(Damage, hit.point, hit.normal, true, gameObject, hit.collider.gameObject);

				if (onDealtDamageEvent != null)
					onDealtDamageEvent.Invoke(Damage);
			}

			// Call event
			if (onRaycastHitEvent != null)
				onRaycastHitEvent.Invoke(hit);
		}

		public override void RemoveBullet()
		{
			// Don't remove bullet here
			if (ReloadMethod == ReloadType.InfiniteAmmo)
				return;

			else if (ReloadMethod == ReloadType.InternalAmmo)
				InternalAmmo--;
			else if (ReloadMethod == ReloadType.ManualClip)
			{
				Bullet firstB = GetComponentInChildren<Bullet>(false);

				// Deactivate gameobject as this bullet has been consumed
				if (firstB != null)
					StartCoroutine(NetworkUtils.Destroy(firstB.gameObject));
			}

			// Whenever we remove a bullet is a good time to check the chamber
			updateChamberedBullet();
		}

		protected override void ejectCasing()
		{
			if (!photonView.IsMine)
				return;

			if (!EjectPointTransform)
				return;

			GameObject shell = PhotonNetwork.Instantiate(BulletCasingPrefab.name, EjectPointTransform.position, EjectPointTransform.rotation);

			Rigidbody rb = shell.GetComponentInChildren<Rigidbody>();

			if (rb)
				rb.AddRelativeForce(Vector3.right * BulletCasingForce, ForceMode.VelocityChange);

			// Clean up shells
			StartCoroutine(NetworkUtils.Destroy(shell, 5f));
		}

		#region PUN RPCs & Remote Events

		[PunRPC]
		public void RPC_PlaySpatialAudio(int soundIndex, Vector3 position, float volume)
		{
			switch (soundIndex)
			{
				case 0: // Gunshot
					VRUtils.Instance.PlaySpatialClipAt(GunShotSound, position, volume, amg: _audioMixerGroup);
					break;
				case 1: // Empty
					VRUtils.Instance.PlaySpatialClipAt(EmptySound, position, volume, 0.5f, amg: _audioMixerGroup);
					break;
			}
		}

		#endregion
	}
}
