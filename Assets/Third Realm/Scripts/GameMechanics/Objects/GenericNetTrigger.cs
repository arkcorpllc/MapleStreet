using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Events;

using Photon.Pun;

using ThirdRealm.Debugging;

namespace ThirdRealm.GameMechanics
{
	[RequireComponent(typeof(PhotonView))]
	[RequireComponent(typeof(BoxCollider))]
	public class GenericNetTrigger : MonoBehaviour
	{
		public bool useLayerMask = false;
		public bool useTag = false;
		public bool activateOnce = false;

		[SerializeField]
		private UnityEvent _onTriggerEnterEvent;

		[SerializeField]
		private UnityEvent _onTriggerExitEvent;

		[SerializeField]
		private LayerMask _targetLayerMask = 0;

		[SerializeField]
		private string _targetTag = string.Empty;

		private bool _isProcessing = false;

		private PhotonView _view;

		private void Awake()
		{
			if (!useLayerMask && !useTag)
				DebugLogger.LogWarning("[3RC][GenericNetTrigger]: Not filtering by layer or tag. Destroying this component!");

			_view = GetComponent<PhotonView>();
		}

		private void OnTriggerEnter(Collider other)
		{
			if (!IsValidContact(other.gameObject))
				return;

			_view.RPC("RPC_GenericNetTriggerRPC", RpcTarget.AllViaServer, true);
		}

		private void OnTriggerExit(Collider other)
		{
			if (!IsValidContact(other.gameObject))
				return;

			_view.RPC("RPC_GenericNetTriggerRPC", RpcTarget.AllViaServer, false);
		}

		private bool IsValidContact(GameObject other)
		{
			bool isValid = false;

			if (useLayerMask)
				isValid = other.layer.Equals(_targetLayerMask);

			if (useTag)
				isValid = other.CompareTag(_targetTag);

			if (_isProcessing)
				isValid = false;

			return isValid;
		}

		[PunRPC]
		private void RPC_GenericNetTriggerRPC(bool onEntered)
		{
			_isProcessing = true;

			if (onEntered)
				_onTriggerEnterEvent?.Invoke();
			else
				_onTriggerExitEvent?.Invoke();

			if (_view.IsMine)
				if (activateOnce)
					gameObject.SetActive(false);

			_isProcessing = false;
		}
	}
}
