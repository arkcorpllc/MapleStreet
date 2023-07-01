using System.Collections;
using System.Collections.Generic;

using UnityEngine;

using Photon.Pun;
using Photon.Realtime;

using BNG;

namespace ThirdRealm.GameMechanics
{
	using Utils;

	public class NetworkedProjectile : Projectile
	{
		public bool destroyProjectileOnHit = true;

		private protected bool _markedForDeath = false;

		protected PhotonView view;

		public delegate void UpdatePointsDelegate(Player sender, int targetView, int value);
		public static event UpdatePointsDelegate updatePoints;

		private void Awake()
		{
			view = GetComponent<PhotonView>();
		}

		public override void DoHitFX(Vector3 pos, Quaternion rot, Collider col)
		{
			// Create FX at impact point / rotation
			if (HitFXPrefab)
			{
				if (view.IsMine)
				{
					GameObject impact = PhotonNetwork.Instantiate(HitFXPrefab.name, pos, rot);

					NetworkedBulletHole hole = impact.GetComponent<NetworkedBulletHole>();

					if (hole)
						hole.TryAttachTo(col);
				}
			}

			// push object if rigidbody
			Rigidbody hitRigid = col.attachedRigidbody;

			if (hitRigid != null)
				hitRigid.AddForceAtPosition(transform.forward * AddRigidForce, pos, ForceMode.VelocityChange);
		}

		public override void OnCollisionEvent(Collision collision)
		{
			// Ignore Triggers
			if (collision.collider.isTrigger)
				return;

			Rigidbody rb = GetComponent<Rigidbody>();

			if (rb && MinForceHit != 0)
			{
				float zVel = System.Math.Abs(transform.InverseTransformDirection(rb.velocity).z);

				// Minimum Force not achieved
				if (zVel < MinForceHit)
					return;
			}

			Vector3 hitPosition = collision.contacts[0].point;
			Vector3 normal = collision.contacts[0].normal;

			Quaternion hitNormal = Quaternion.FromToRotation(Vector3.forward, normal);

			// FX - Particles, Decals, etc.
			DoHitFX(hitPosition, hitNormal, collision.collider);

			NetworkedDamageable d = collision.collider.GetComponent<NetworkedDamageable>();

			if (d)
			{
				d.DealDamage(Damage, hitPosition, normal, true);

				if (onDealtDamageEvent != null)
					onDealtDamageEvent.Invoke();

#if _3RC_USE_POINTS
				if (d.GetPointsWorth > 0)
					if (d.Health <= 0)
						updatePoints?.Invoke(view.Owner, d.GetView.ViewID, d.GetPointsWorth);
#endif // _3RC_USE_POINTS
			}

			if (destroyProjectileOnHit && !_markedForDeath)
			{
				_markedForDeath = true;

				StartCoroutine(NetworkUtils.Destroy(gameObject));
			}
		}
	}
}
