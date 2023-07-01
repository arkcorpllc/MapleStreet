using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Threading.Tasks;

using UnityEngine;

using ThirdRealm.Debugging;

namespace ThirdRealm.MegaBrain
{
	[System.Serializable]
	public enum HapticType : int
	{
		INVALID		= 0,
		WIND		= 1 << 0,
		RUMBLE		= 1 << 1,
		ELEVATOR	= 1 << 2,
		AIR_CANNON	= 1 << 3,
	}

	public static class MegaBrain
	{
		public static UdpClient client;

		public static bool hasClient = false;
		private static bool canPing = true;

		public static string ipAddress;

		public static int port;

		private static readonly string UDPResetCommand = "home";

		public delegate void OnDestroyedDelegate();
		public static event OnDestroyedDelegate onDisconnected;

		#region Private Methods

		private static async Task<Ping> DoPingAsync()
		{
			if (!canPing)
				return null;

			canPing = false;

			var ping = new Ping(ipAddress);

			while (!ping.isDone)
			{
				if (ping.time < 0)
				{
					canPing = false;

					Disconnect();

					return null;
				}

				if (ping.time > 900 || ping.time == 0)
					ping.DestroyPing();

				await Task.Yield();
			}

			canPing = true;

			return ping;
		}

		private static async Task<int> StartGetPing()
		{
			var pingResult = await DoPingAsync();

			if (pingResult == null)
			{
				// NOTE: FAILED TO CONNECT TO DEVICE!
				return -1;
			}

			return pingResult.time;
		}

		private static IEnumerator PulseWait()
		{
			yield return new WaitForSeconds(0.15f);

			ExecCommand(UDPResetCommand);
		}

		private static void ExecCommand(string command)
		{
			if (command == string.Empty)
				DebugLogger.LogError("[3RC][NetworkTriggers]: UDP Command cannot be an empty string!");

			if (client.Client.Connected)
			{
				try
				{
					client.Send(Encoding.ASCII.GetBytes(command), Encoding.ASCII.GetByteCount(command));
				}
				catch (System.Exception e)
				{
					DebugLogger.LogError($"[3RC][NetworkTriggers]: Exception encountered! Exception: {e.Message}");
				}
			}
		}

#endregion // Private Methods

		#region Public Methods

		// NOTE: Possible race-condition here... consider reimplementing
		public static int GetPing() => StartGetPing().Result;

		/// <summary>
		/// Call this method to create a connection between this client and the MegaBrain
		/// </summary>
		/// <returns>
		/// true if there is an error<br/>
		/// false if successful
		/// </returns>
		public static bool Connect()
		{
			try
			{
				client = new UdpClient(5000);

				client.Connect(new IPEndPoint(IPAddress.Parse(ipAddress), port));

				if (client != null && client.Client.Connected)
				{
					hasClient = true;

					DebugLogger.Log($"[3RC][ThirdRealmNetCore]: MegaBrain Client Connection Established.");

					return false;
				}
			}
			catch (System.Exception ex)
			{
				DebugLogger.LogError($"[3RC][MegaBrain]: Connect():Exception thrown: {ex.Message}");
			}

			return true;
		}

		public static void Disconnect()
		{
			onDisconnected?.Invoke();

			if (client != null && client.Client != null && client.Client.Connected)
			{
				try
				{
					client.Close();
					client.Dispose();
				}
				catch (System.Exception ex)
				{
					DebugLogger.LogError($"[3RC][ThirdRealmNetCore]:Disconnect():Exception Thrown {ex.Message}");
				}
			}
		}

		public static void TriggerHaptic(HapticType hapticType, MonoBehaviour monoBehaviour)
		{
			// Trigger hardware \\
			// Funnel this through the master client so it is only called once and can be easily regulated
			if (!Photon.Pun.PhotonNetwork.IsMasterClient)
				return;

			// Execute BrightSign Command
			ExecBrightSign(ref hapticType, ref monoBehaviour);

			// NEEDS IMPLEMENTATION \\
			// Execute RaspberryPi
			//ExecRaspberry(ref hapticType);
		}

		private static void ExecBrightSign(ref HapticType hapticType, ref MonoBehaviour monoBehaviour)
		{
			switch (hapticType)
			{
				case HapticType.WIND:
					ExecCommand("wind");

					break;
				case HapticType.AIR_CANNON:
					ExecCommand("cannon");

					break;
				case HapticType.ELEVATOR:
					ExecCommand("elevator");

					break;
				case HapticType.RUMBLE:
					ExecCommand("rumble");

					break;
				case HapticType.INVALID:
				default:
					DebugLogger.LogWarning("Invalid command supplied!");

					break;
			}

			monoBehaviour.StartCoroutine(PulseWait());
		}

		private static void ExecRaspberry(ref HapticType hapticType)
		{
			throw new System.NotImplementedException("This method has not been implemented yet!");
		}

		#endregion // Public Methods
	}
}
