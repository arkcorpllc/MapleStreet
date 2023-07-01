using System.Collections;
using System.Collections.Generic;

using UnityEngine;

using ExitGames.Client.Photon;
using Photon.Realtime;
using Photon.Pun;
using Photon.Voice.PUN;

using ThirdRealm.Utils.Extensions;
using ThirdRealm.Debugging;

namespace ThirdRealm.Utils
{
	namespace NetExtensions
	{
		public static class PhotonExtensions
		{
			/// <summary>
			/// Used to observe voice network traffic latency
			/// </summary>
			/// <param name="instance"></param>
			/// <returns>The round-trip time for a single voice packet</returns>
			internal static int GetPing(this PhotonVoiceNetwork instance) => instance.VoiceClient.RoundTripTime;
		}
	}

	#region Structs

	/// <summary>
	/// Struct of options relating to how Photon should process a given event
	/// </summary>
	public struct RemoteEventOptions
	{
		/// <summary>
		/// An instance of Photon's internal event options used to process this event call
		/// </summary>
		public RaiseEventOptions eventOptions;

		/// <summary>
		/// An object used to describe to Photon how to send this event
		/// </summary>
		public SendOptions sendOptions;

		public RemoteEventOptions(ReceiverGroup receiverGroup, SendOptions sendOptions, EventCaching cacheOption = EventCaching.DoNotCache)
		{
			eventOptions = new RaiseEventOptions { Receivers = receiverGroup,
												   CachingOption = cacheOption };
			this.sendOptions = sendOptions;
		}
	}

	// INTERNAL: Ascending
	/// <summary>
	/// Internal 3rd Realm Core Photon Network event codes
	/// </summary>
	public enum InternalEventCode : byte
	{
		APP_LOAD_APPLICATION		= 1,
		APP_QUIT_APPLICATION		= 2,
		NOTIFY_PC_IS_MASTER			= 3,
		NOTIFY_PLAYER_ACTIVE		= 4,
		MEGABRAIN_HAPTIC_TRIGGERED	= 5,
		NOTIFY_EXPERIENCE_LENGTH	= 6,
		APP_REQUEST_LOCATION		= 7,
		APP_RESPOND_LOCATION		= 8,
		REQUEST_DEVICE_INFO			= 9,
		RESPOND_DEVICE_INFO			= 10,
	}

	// GAME SPECIFIC : Descending
	/// <summary>
	/// Game specific Photon Network event codes
	/// </summary>
	public enum RemoteEventCode : byte
	{}

	#endregion // Structs

	public static partial class NetworkUtils
	{
		#region Old Methods Still In Use. Check their usages and reconsider implementation

		public static void ChangeObjectParent<T>(Transform parent, T component)
			where T : Component
		{
			if (component.gameObject.GetComponent<BNG.NetworkedGrabbable>())
			{
				var grabbable = component.gameObject.GetComponent<BNG.NetworkedGrabbable>();

				grabbable.UpdateOriginalParent(parent);

				return;
			}

			ChangeObjectParent(parent, component.transform);
		}

		public static void ChangeObjectParent(Transform parent, Transform child)
		{
			DebugLogger.Log($"Attempting to re-parent object {child.name}");

			child.parent = parent;
		}

		public static IEnumerator Destroy(GameObject gO, float delay = 0f)
		{
			DebugLogger.Log($"Destroying object: {gO.name}");

			if (gO && PhotonNetwork.IsConnected)
			{
				var view = gO.GetComponent<PhotonView>();

				if (!view || !(view.IsMine))
					yield break;

				yield return new WaitForSecondsRealtime(delay);

				if (!gO)
					yield break;

				PhotonNetwork.Destroy(gO);
			}

			yield break;
		}

		#endregion // Old Methods Still in Use

		#region Photon Events

		#region BasicEvents

		/// <summary>
		/// Wrapper method for PhotonNetwork.RaiseEvent used for sending Photon Network events
		/// </summary>
		/// <param name="eventCode">The byte code value to determine the ID of this event</param>
		/// <param name="options"><seealso cref="RemoteEventOptions"/> to describe how to send and process the event code</param>
		/// <param name="data">The data to be sent</param>
		private static void BasicEvent(byte eventCode, RemoteEventOptions options, object[] data)
		{
			try
			{
				PhotonNetwork.RaiseEvent(eventCode, data, options.eventOptions, options.sendOptions);
			}
			catch (System.Exception e)
			{
				DebugLogger.LogError($"Encountered Exception: Data: {e.Data} | Message: {e.Message}");
			}
		}

		/// <summary>
		/// Use this method to raise a Photon event with no data
		/// </summary>
		/// <typeparam name="TEnum">System.Enum underlying type <u>should</u> be a byte</typeparam>
		/// <param name="eventCode"><typeparamref name="TEnum"/> event to raise</param>
		/// <param name="options"><seealso cref="RemoteEventCode"/> event options for Photon</param>
		public static void BasicEvent<TEnum>(TEnum eventCode, RemoteEventOptions options)
			where TEnum : System.Enum
		{
			BasicEvent(eventCode.EnumToByte(), options, null);
		}

		/// <summary>
		/// Use this method to raise a Photon event with one data-type
		/// </summary>
		/// <typeparam name="TEnum">System.Enum underlying type <u>should</u> be a byte</typeparam>
		/// <typeparam name="T0">Any Photon serializable data-type</typeparam>
		/// <param name="eventCode"><typeparamref name="TEnum"/> photon event to raise</param>
		/// <param name="options"><seealso cref="RemoteEventCode"/> event options for Photon</param>
		/// <param name="value0"><typeparamref name="T0"/> data value to pass with the event</param>
		public static void BasicEvent<TEnum, T0>(TEnum eventCode, RemoteEventOptions options, T0 value0)
			where TEnum : System.Enum
		{
			var data = new object[] { value0 };

			BasicEvent(eventCode.EnumToByte(), options, data);
		}

		public static void BasicEvent<TEnum, T0, T1>(TEnum eventCode, RemoteEventOptions options, T0 value0, T1 value1)
			where TEnum : System.Enum
		{
			var data = new object[] { value0, value1 };

			BasicEvent(eventCode.EnumToByte(), options, data);
		}

		public static void BasicEvent<TEnum, T0, T1, T2>(TEnum eventCode, RemoteEventOptions options, T0 value0, T1 value1, T2 value2)
			where TEnum : System.Enum
		{
			var data = new object[] { value0, value1, value2 };

			BasicEvent(eventCode.EnumToByte(), options, data);
		}

		public static void BasicEvent<TEnum, T0, T1, T2, T3>(TEnum eventCode, RemoteEventOptions options, T0 value0, T1 value1, T2 value2, T3 value3)
			where TEnum : System.Enum
		{
			var data = new object[] { value0, value1, value2, value3 };

			BasicEvent(eventCode.EnumToByte(), options, data);
		}

		public static void BasicEvent<TEnum, T0, T1, T2, T3, T4>(TEnum eventCode, RemoteEventOptions options, T0 value0, T1 value1, T2 value2, T3 value3, T4 value4)
			where TEnum : System.Enum
		{
			var data = new object[] { value0, value1, value2, value3, value4 };

			BasicEvent(eventCode.EnumToByte(), options, data);
		}

		public static void BasicEvent<TEnum, T0, T1, T2, T3, T4, T5>(TEnum eventCode, RemoteEventOptions options, T0 value0, T1 value1, T2 value2, T3 value3, T4 value4, T5 value5)
			where TEnum : System.Enum
		{
			var data = new object[] { value0, value1, value2, value3, value4, value5 };

			BasicEvent(eventCode.EnumToByte(), options, data);
		}

		public static void BasicEvent<TEnum>(TEnum eventCode, RemoteEventOptions options, params object[] parameters)
			where TEnum : System.Enum
		{
			BasicEvent(eventCode.EnumToByte(), options, parameters);
		}

		#endregion //BasicEvents

		#endregion // Photon Events
	}
}
