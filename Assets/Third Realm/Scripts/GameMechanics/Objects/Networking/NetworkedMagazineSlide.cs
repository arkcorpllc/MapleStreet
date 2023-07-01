using System.Collections;
using System.Collections.Generic;
using System.Threading;
using System.Threading.Tasks;

using UnityEngine;

using Photon.Pun;

using BNG;
using Photon.Realtime;

namespace ThirdRealm.GameMechanics
{
	using Utils;

	public class NetworkedMagazineSlide : MagazineSlide, IPunObservable
	{
		public override void AttachGrabbableMagazine(Grabbable mag, Collider magCollider)
		{
			base.AttachGrabbableMagazine(mag, magCollider);

			var weaponView = AttachedWeapon.GetComponent<PhotonView>();

			if (weaponView)
			{
				if (!weaponView.IsMine)
					return;

				var magView = mag.GetComponent<PhotonView>();

				if (magView && !magView.IsMine)
					magView.RequestOwnership();
			}
		}

		public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
		{
			if (stream.IsWriting)
			{
				stream.SendNext(lockedInPlace);
				stream.SendNext(magazineInPlace);
			}
			else
			{
				lockedInPlace = (bool)stream.ReceiveNext();
				magazineInPlace = (bool)stream.ReceiveNext();
			}
		}
	}
}
