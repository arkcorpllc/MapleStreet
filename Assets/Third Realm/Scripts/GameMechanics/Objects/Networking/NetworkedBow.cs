using System.Collections;
using System.Collections.Generic;

using UnityEngine;

using Photon.Pun;

namespace ThirdRealm.GameMechanics
{
	public class NetworkedBow : BNG.Bow
	{
		private PhotonView photonView;

		protected override void Awake()
		{
			photonView = GetComponent<PhotonView>();

			base.Awake();
		}

		public override void GrabFromKnock()
		{
			if ((PhotonNetwork.IsConnected && PhotonNetwork.InRoom) && photonView.IsMine)
			{
				var arrow = PhotonNetwork.Instantiate(ArrowPrefabName, transform.position, Quaternion.identity);

				arrow.transform.position = ArrowKnock.transform.position;
				arrow.transform.LookAt(GetArrowRest());

				BNG.Grabbable g = arrow.GetComponent<BNG.Grabbable>();

				g.GrabButton = BNG.GrabButton.Trigger;
				g.AddControllerVelocityOnDrop = false;

				GrabArrow(arrow.GetComponent<BNG.Arrow>());
			}
		}
	}
}
