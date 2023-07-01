using System.Collections;
using System.Collections.Generic;

using UnityEngine;

using Photon.Pun;

namespace ThirdRealm
{
	// TODO: Refactor this class to be called NetworkRig
	public class NetworkRigV1 : MonoBehaviourPunCallbacks, IPunInstantiateMagicCallback
	{
		public GameObject head;

		public GameObject[] coloredAvatarGOs;

		public GameObject clothesGO;

		public Color[] colors = {
			Color.blue,
			Color.red,
			Color.green,
			Color.yellow,
			Color.cyan,
			Color.magenta
		};

		public Material[] clothesMaterials;

		// Start is called before the first frame update
		private void Start()
		{
			DontDestroyOnLoad(this);

			if (photonView.IsMine && PhotonNetwork.IsConnected)
			{
				var colorIndex = Random.Range(0, colors.Length - 1);
				photonView.RPC("RPC_SyncAvatarColors", RpcTarget.AllBuffered, colorIndex);
			}
		}

		[PunRPC]
		private void RPC_SyncAvatarColors(int index)
		{
			var randomColor = colors[index];

			for (int i = 0; i < coloredAvatarGOs.Length; i++)
			{
				var renderer = coloredAvatarGOs[i].GetComponent<Renderer>();
				renderer.material.SetColor("_BaseColor", new Color(randomColor.r, randomColor.g, randomColor.b));
			}

			if (clothesGO)
			{
				Material[] mats = clothesGO.GetComponent<Renderer>().materials;
				mats[0] = clothesMaterials[index];
				mats[1] = clothesMaterials[index];

				clothesGO.GetComponent<Renderer>().materials = mats;
			}
		}

		public void OnPhotonInstantiate(PhotonMessageInfo info)
		{
			info.Sender.TagObject = head;
		}
	}
}