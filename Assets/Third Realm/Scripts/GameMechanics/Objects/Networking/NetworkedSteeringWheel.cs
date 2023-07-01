using System.Collections;
using System.Collections.Generic;

using UnityEngine;

using Photon.Pun;

using BNG;

namespace ThirdRealm.GameMechanics
{
	public class NetworkedSteeringWheel : SteeringWheel, IPunObservable
	{
		[field: SerializeField]
		public PhotonView GetView { get; set; }

		protected override void Update()
		{
			// Calculate rotation if being held or returning to center
			if (grab.BeingHeld)
				UpdateAngleCalculations();
			else if (ReturnToCenter)
				ReturnToCenterAngle();
			
			// Apply the new angle
			ApplyAngleToSteeringWheel(Angle);

			// Call any events
			CallEvents();

			UpdatePreviewText();

			// Update the angle so we can compare it next frame
			UpdatePreviousAngle(targetAngle);
		}

		public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
		{
			if (stream.IsWriting && GetView.IsMine)
			{
				stream.SendNext(targetAngle);
			}
			else if (stream.IsReading)
			{
				targetAngle = (float)stream.ReceiveNext();
			}
		}
	}
}
