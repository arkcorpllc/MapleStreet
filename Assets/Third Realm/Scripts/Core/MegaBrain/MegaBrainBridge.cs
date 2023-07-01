using System.Collections;
using System.Collections.Generic;

using UnityEngine;

using Unity.VisualScripting;

using ExitGames.Client.Photon;
using Photon.Realtime;

using ThirdRealm.Utils;
using ThirdRealm.Debugging;

namespace ThirdRealm.MegaBrain
{
	public class MegaBrainBridge : MonoBehaviour
	{
		private static MegaBrainBridge s_instance;

		private static bool s_isProcessingHaptic = false;

		#region Public Properties

		public static MegaBrainBridge Instance
		{
			get
			{
				if (s_instance == null)
					s_instance = FindObjectOfType<MegaBrainBridge>();

				if (s_instance == null)
					DebugLogger.LogError("Could not find a valid MegaBrainBridge instance!");

				return s_instance;
			}
		}

		#endregion // Public Properties

		#region Unity Callbacks

		private void Awake()
		{
			if (!s_instance)
				s_instance = this;
		}

		#endregion // Unity Callbacks

		#region Public Methods

		/// <summary>
		/// This method should not be called directly unless you know what you are doing.
		/// </summary>
		/// <param name="hapticType"></param>
		public void TriggerHapticNetworked(HapticType hapticType)
		{
			if (s_isProcessingHaptic)
				return;

			s_isProcessingHaptic = true;

			DebugLogger.Log($"[3RC][MegaBrainBridge]: Processing haptic {hapticType}");

			MegaBrain.TriggerHaptic(hapticType, this);

			s_isProcessingHaptic = false;
		}

		public void TriggerHaptic(HapticType hapticType)
		{
			NetworkUtils.BasicEvent(InternalEventCode.MEGABRAIN_HAPTIC_TRIGGERED,
									new RemoteEventOptions(ReceiverGroup.All, SendOptions.SendReliable),
									(int)hapticType);
		}

		#endregion // Public Methods
	}

	[UnitTitle("Trigger Room Haptic")]
	public class TriggerRoomHapticNode : Unit
	{
		[DoNotSerialize, PortLabelHidden]
		public ControlInput inputTrigger;

		[DoNotSerialize, PortLabelHidden]
		public ControlOutput outputTrigger;

		[DoNotSerialize, AllowsNull]
		public ValueInput hapticType;

		protected override void Definition()
		{
			inputTrigger = ControlInput("inputTrigger", (Flow) =>
			{
				var hT = Flow.GetValue<HapticType>(hapticType);

				if (hT == HapticType.INVALID)
					return outputTrigger;

				MegaBrainBridge.Instance.TriggerHaptic(hT);

				return outputTrigger;
			});

			outputTrigger = ControlOutput("outputTrigger");

			hapticType = ValueInput("hapticType", HapticType.INVALID);

			Succession(inputTrigger, outputTrigger);
		}
	}
}
