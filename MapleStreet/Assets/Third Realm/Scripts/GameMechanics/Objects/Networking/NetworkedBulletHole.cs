using System.Collections;
using System.Collections.Generic;

using UnityEngine;

using Photon.Pun;

namespace ThirdRealm.GameMechanics
{
	using Utils;

	public class NetworkedBulletHole : MonoBehaviour
	{
		public Transform BulletHoleDecal;

		public float MaxScale = 1f;
		public float MinScale = 0.75f;

		public bool RandomYRotation = true;

		public float DestroyTime = 10f;

		public PhotonView view;

		// Start is called before the first frame update
		void Start()
		{
			view = GetComponent<PhotonView>();

			transform.localScale = Vector3.one * Random.Range(0.75f, 1.5f);

			if (BulletHoleDecal != null && RandomYRotation)
			{
				Vector3 currentRotation = BulletHoleDecal.transform.localEulerAngles;
				BulletHoleDecal.transform.localEulerAngles = new Vector3(currentRotation.x, currentRotation.y, Random.Range(0, 90f));
			}

			// Make sure audio follows timestep pitch
			AudioSource audio = GetComponent<AudioSource>();
			audio.pitch = Time.timeScale;

			StartCoroutine(NetworkUtils.Destroy(gameObject, DestroyTime));
		}

		public void TryAttachTo(Collider col)
		{
			if (!(view.IsMine))
				return;

			if (transformIsEqualScale(col.transform))
			{
				var colView = col.GetComponent<PhotonView>();

				if (colView)
					view.RPC("RPC_AttemptToParent", RpcTarget.All, colView.ViewID);
				else
					// NOTE: This will not be networked
					// TODO: Find a way to handle this!
					transform.parent = col.transform;

				StartCoroutine(NetworkUtils.Destroy(gameObject, DestroyTime)) ;
			}
			// No need to parent if static collider
			else if (col.gameObject.isStatic)
				StartCoroutine(NetworkUtils.Destroy(gameObject, DestroyTime));
			// Malformed collider (non-equal proportions)
			// Just destroy the decal quickly
			else
				StartCoroutine(NetworkUtils.Destroy(gameObject, 0.1f));
		}

		// Are all scales equal? Ex : 1, 1, 1
		private bool transformIsEqualScale(Transform theTransform)
		{
			return theTransform.localScale.x == theTransform.localScale.y && theTransform.localScale.x == theTransform.localScale.z;
		}

		[PunRPC]
		public void RPC_AttemptToParent(int viewID) => NetworkUtils.ChangeObjectParent(PhotonView.Find(viewID).transform, transform);
	}
}
