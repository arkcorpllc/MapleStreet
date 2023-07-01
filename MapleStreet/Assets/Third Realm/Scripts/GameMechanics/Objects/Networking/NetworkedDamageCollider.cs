using System.Collections;
using System.Collections.Generic;

using UnityEngine;

using Photon.Pun;

namespace ThirdRealm.GameMechanics
{
	public class NetworkedDamageCollider : BNG.DamageCollider
	{
		private PhotonView view;

		private void Start()
		{
			if (!view)
				view = GetComponent<PhotonView>();
		}

		public override void OnCollisionEnter(Collision collision)
		{
			if (!isActiveAndEnabled)
				return;
		
			OnCollisionEvent(collision);
		}

		public override void OnCollisionEvent(Collision collision)
		{
			//base.OnCollisionEvent(collision);

			LastDamageForce = collision.impulse.magnitude;
			LastRelativeVelocity = collision.relativeVelocity.magnitude;

			var damageable = collision.gameObject.GetComponent<NetworkedDamageable>();
			
			if (damageable)
			{
				var otherView = damageable.gameObject.GetComponent<PhotonView>();

				if (otherView)
					if (LastDamageForce >= MinForce)
						view.RPC("RPC_DealDamage", RpcTarget.AllBuffered, otherView.ViewID, Damage, collision.GetContact(0).point, collision.GetContact(0).normal);
			}
		}

		[PunRPC]
		public void RPC_DealDamage(int viewID, float damageAmount, Vector3? hitPos = null, Vector3? hitNormal = null)
		{
			var d = PhotonNetwork.GetPhotonView(viewID).gameObject.GetComponent<NetworkedDamageable>();

			if (d)
				d.DealDamage(damageAmount, hitPos, hitNormal);
		}
	}
}
