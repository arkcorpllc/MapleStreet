using System.Collections;
using System.Collections.Generic;

using UnityEngine;

using TMPro;

namespace ThirdRealm.PCClient.DeviceManager
{
	[System.Serializable]
	public class DeviceCard : MonoBehaviour
	{
		public TextMeshProUGUI deviceIdText;
		public TextMeshProUGUI projectVersionText;
		public TextMeshProUGUI latencyText;
		public TextMeshProUGUI hmdBatteryPercentText;
		public TextMeshProUGUI lControllerBatteryPercentText;
		public TextMeshProUGUI rControllerBatteryPercentText;

		[HideInInspector]
		public string DeviceId = string.Empty;

		private string _appVersion = string.Empty;

		private int _hmdBatteryLevel = -1;
		private int _lControllerBatteryLevel = -1;
		private int _rControllerBatteryLevel = -1;

		[HideInInspector]
		public float responseTimeStart = 0f;

		[HideInInspector]
		public float responseTimeEnd = 0f;

		/// <summary>
		/// Updates the device manager card display
		/// </summary>
		public void DoUpdate()
		{
			deviceIdText.text = DeviceId;
			projectVersionText.text = $"{Application.productName} version {_appVersion}";
			latencyText.text = ((responseTimeEnd - responseTimeStart) * 1000f).ToString("####0.00") + "ms";
			hmdBatteryPercentText.text = _hmdBatteryLevel.ToString() + '%';
			lControllerBatteryPercentText.text = _lControllerBatteryLevel.ToString() + '%';
			rControllerBatteryPercentText.text = _rControllerBatteryLevel.ToString() + '%';
		}

		/// <summary>
		/// Populate instance fields and execute <see cref="DoUpdate"/>
		/// </summary>
		/// <param name="parameters"></param>
		public void Populate(object[] parameters)
		{
			_appVersion = (string)parameters[0];
			_hmdBatteryLevel = Mathf.FloorToInt((float)parameters[1] * 100f);
			_lControllerBatteryLevel = Mathf.FloorToInt((float)parameters[2] * 100f);
			_rControllerBatteryLevel = Mathf.FloorToInt((float)parameters[3] * 100f);

			DoUpdate();
		}
	}
}
