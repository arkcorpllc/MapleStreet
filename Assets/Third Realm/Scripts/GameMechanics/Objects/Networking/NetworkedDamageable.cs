using System.Collections;

using UnityEngine;

using ExitGames.Client.Photon;
using Photon.Realtime;
using Photon.Pun;

using BNG;

namespace ThirdRealm.GameMechanics
{
	using Utils;

	[RequireComponent(typeof(PhotonView))]
	public class NetworkedDamageable : Damageable
	{
		public PhotonView view;

		private Transform initialParent;

		[SerializeField]
		private int pointsWorth;

		private bool wasRPCCalled = false;

		public int GetPointsWorth { get { return pointsWorth; } }

		public PhotonView GetView { get { return view; } }

		public bool IsDead { get; private set; }

		#region Unity Callbacks

		private void OnEnable()
		{
			if (transform.parent != initialParent)
				transform.parent = initialParent;

			if (rigid)
			{
				rigid.velocity = Vector3.zero;
				rigid.angularVelocity = Vector3.zero;
			}

			IsDead = false;
		}

		private void Awake()
		{
			initialParent = transform.parent;
		}

		protected override void Start()
		{
			if (!view)
				view = GetComponent<PhotonView>();

			base.Start();
		}


		#endregion // Unity Callbacks

		public void DealDamage(float damageAmount, Vector3? hitPosition, Vector3? hitNormal)
		{
			base.DealDamage(damageAmount, hitPosition, hitNormal, true);
		}

		public override void SpawnItem()
		{
			if (!PhotonNetwork.IsMasterClient)
				return;

			var go = PhotonNetwork.InstantiateRoomObject(SpawnOnDeath.name, transform.position, transform.rotation);

			var goPhotonView = go.GetComponent<PhotonView>();

			view.RPC("RPC_ChangeParent", RpcTarget.All, goPhotonView.ViewID);
		}

		public override void DestroyThis()
		{
			Health = 0;
			destroyed = true;

			view.RPC("RPC_ToggleGameObjectActivation", RpcTarget.All, false);

			// Spawn object
			if (SpawnOnDeath != null)
				SpawnItem();

			// Force to kinematic if rigid present
			if (rigid)
				rigid.isKinematic = true;

			// Invoke Callback Event
			view.RPC("RPC_OnDestroy", RpcTarget.All);

			if (DestroyOnDeath)
				StartCoroutine(NetworkUtils.Destroy(gameObject, DestroyDelay));
			else if (Respawn)
				view.RPC("RPC_Respawn", RpcTarget.All, RespawnTime);

			// Drop this if the player is holding it
			Grabbable grab = GetComponent<Grabbable>();
			
			if (DropOnDeath && grab != null && grab.BeingHeld)
				grab.DropItem(false, true);

			// Remove an decals that may have been parented to this object
			if (RemoveBulletHolesOnDeath)
			{
				NetworkedBulletHole[] holes = GetComponentsInChildren<NetworkedBulletHole>();
				foreach (var hole in holes)
				{
					// NOTE: This may cause problems when attempting to
					//		 remove bullet holes that do NOT belong to this player
					// TODO: May want to find a better way to handle this for
					//		 future projects
					StartCoroutine(NetworkUtils.Destroy(hole.gameObject));
				}

				//Transform decal = transform.Find("Decal");
				//if (decal)
				//	Destroy(decal.gameObject);
			}
		}

		public void DoRespawn(float seconds)
		{
			view.RPC("RPC_Respawn", RpcTarget.All, seconds);
		}

		private IEnumerator RespawnRoutine(float seconds)
		{
			yield return new WaitForSeconds(seconds);

			Health = _startingHealth;
			IsDead = destroyed = false;

			if (view.IsMine)
				view.RPC("RPC_ToggleGameObjectActivation", RpcTarget.All, true);

			// Reset kinematic property if applicable
			if (rigid)
				rigid.isKinematic = initialWasKinematic;

			// Call events
			if (onRespawn != null)
				onRespawn.Invoke();

			yield break;
		}

		[PunRPC]
		public void RPC_ChangeParent(int viewID, string parentName)
		{
			var obj = PhotonNetwork.GetPhotonView(viewID).transform;

			NetworkUtils.ChangeObjectParent(GameObject.Find(parentName).transform, obj);
		}

		[PunRPC]
		public void RPC_ToggleGameObjectActivation(bool isRespawn)
		{
			// Activate
			foreach (var go in ActivateGameObjectsOnDeath)
				go.SetActive(!isRespawn);

			// Deactivate
			foreach (var go in DeactivateGameObjectsOnDeath)
				go.SetActive(isRespawn);

			// Colliders
			foreach (var col in DeactivateCollidersOnDeath)
				col.enabled = isRespawn;
		}

		[PunRPC]
		public void RPC_Respawn(float seconds)
		{
			StartCoroutine(RespawnRoutine(seconds));
		}

		[PunRPC]
		public void RPC_OnDestroy()
		{
			onDestroyed.Invoke();
		}
	}
}
