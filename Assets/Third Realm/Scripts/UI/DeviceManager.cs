using System.Collections;
using System.Collections.Generic;
using System.Linq;

using UnityEngine;

using ExitGames.Client.Photon;
using Photon.Realtime;
using Photon.Pun;

using TMPro;

using ThirdRealm.UI;
using ThirdRealm.Networking;
using ThirdRealm.Utils;

namespace ThirdRealm.PCClient.DeviceManager
{
	public class DeviceManager : MonoBehaviour, IUIPanel
	{
		public GameObject deviceCardPrefab;

		private string _panelName = string.Empty;

		private Dictionary<DeviceCard, float> _deviceCards = new Dictionary<DeviceCard, float>();

		private float _lastUpdateTime = 0f;

		[Tooltip("The time in seconds to 'wait' between updates")]
		[SerializeField]
		private float _updateInterval = 30f;

		[Tooltip("Multiplies value of _updateInterval by this value to determine the expiration time of a device.")]
		[SerializeField]
		private float _updateIntervalMultiplier = 2f;

		[SerializeField]
		private Transform _deviceCardsParent;

		public string PanelName
		{
			get { return _panelName; }
			set { _panelName = value; }
		}

		private void OnEnable()
		{
			ThirdRealmNetCore.onPhotonEvent += OnPhotonEvent;

			DoUpdate();
		}

		private void OnDisable()
		{
			ThirdRealmNetCore.onPhotonEvent -= OnPhotonEvent;
		}

		private void Awake()
		{
			_panelName = "Device Manager";
		}

		private void Update()
		{
			if (Time.time - _lastUpdateTime < _updateInterval)
				return;

			DoUpdate();
		}

		public void Close()
		{
			gameObject.SetActive(false);
		}

		public void Show()
		{
			gameObject.SetActive(true);
		}

		private void ProcessResponse(string deviceId, object[] deviceParams)
		{
			foreach (var card in _deviceCards)
			{
				if (card.Key.DeviceId == deviceId)
				{
					card.Key.responseTimeEnd = _deviceCards[card.Key] = Time.time; // Update last update time

					card.Key.Populate(deviceParams);

					return;
				}
			}

			// Didn't find a card. Create one
			var tempCard = Instantiate(deviceCardPrefab, _deviceCardsParent);

			var dcComp = tempCard.GetComponent<DeviceCard>();

			dcComp.DeviceId = deviceId;

			dcComp.Populate(deviceParams);

			_deviceCards.Add(dcComp, Time.time);
		}

		private void DoUpdate()
		{
			List<DeviceCard> cardsToRemove = null;

			// Refresh displayed info of each device card
			// while also tagging expired device cards --
			// devices that are no longer reachable -- to
			// be removed.
			foreach (var card in _deviceCards)
			{
				// if the device has expired, mark it for removal
				if (Time.time - card.Value >= _updateInterval * _updateIntervalMultiplier)
				{
					if (cardsToRemove is null)
						cardsToRemove = new List<DeviceCard>(4);

					cardsToRemove.Add(card.Key);
				}

				card.Key.responseTimeStart = Time.time;
			}

			// remove expired device cards
			if (cardsToRemove != null)
			{
				foreach (var card in cardsToRemove)
				{
					Destroy(card.gameObject);
					_deviceCards.Remove(card);
				}
			}

			// Request new information from headsets
			NetworkUtils.BasicEvent(InternalEventCode.REQUEST_DEVICE_INFO, new RemoteEventOptions(ReceiverGroup.Others, SendOptions.SendReliable));

			_lastUpdateTime = Time.time;
		}

		private void OnPhotonEvent(EventData photonEvent)
		{
			if (photonEvent.Code > 199)
				return;

			var data = (object[])photonEvent.CustomData;

			if (photonEvent.Code == (byte)InternalEventCode.RESPOND_DEVICE_INFO)
				ProcessResponse((string)data[0], data.Skip(1).ToArray());
		}
	}
}
