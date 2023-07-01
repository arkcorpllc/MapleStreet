using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Threading;
using System.Threading.Tasks;

using UnityEngine;

using ExitGames.Client.Photon;
using Photon.Realtime;
using Photon.Pun;

using ThirdRealm.Networking;
using ThirdRealm.Utils;
using ThirdRealm.Products;
using ThirdRealm.Debugging;

#if UNITY_ANDROID && !UNITY_EDITOR
using ThirdRealm.Utils.Android;
#endif

using UtilsClass = ThirdRealm.Utils.Utils;

namespace ThirdRealm
{
	public sealed class ApplicationManager : MonoBehaviour
	{
		#region PUBLIC MEMBERS

		public Product megaverseHomeProduct;

		#endregion // PUBLIC MEMBERS

		#region PRIVATE MEMBERS

		private static ApplicationManager s_instance;

		[SerializeField]
		private SerializableDictionary<string, bool> _appPaths;

		private bool _isLoading = false;
		private bool _hasNotifExLen = false;

		#endregion // PRIVATE MEMBERS \\

		#region PROPERTIES

		public static ApplicationManager Instance
		{
			get
			{
				if (s_instance == null)
					s_instance = FindObjectOfType<ApplicationManager>();

				return s_instance;
			}
		}

		public SerializableDictionary<string, bool> GetApplications
		{
			get { return _appPaths; }
		}

		/// <summary>
		/// Returns whether or not this is a lite experience
		/// </summary>
		public static bool IsFiveMinuteEx
		{
			get; private set;
		}

		/// <summary>
		/// Returns whether or not the white list has been created and analyzed or not
		/// </summary>
		public static bool WhiteListCreated
		{
			get; private set;
		}

		public static string LocationIdentifier { get; private set; } = string.Empty;

		/// <summary>
		/// Get the Runtime data path for the application.
		/// </summary>
		/// <returns>
		/// "<see cref="Application.persistentDataPath"/> + /megaverse/" - if on Android<br/>
		/// "<see cref="Application.dataPath"/> + /Third Realm/Data/RuntimeData/" - if on PC
		/// </returns>
		public static string GetMVDataPath
		{
			get
			{
#if UNITY_ANDROID && !UNITY_EDITOR
				return $@"{Application.persistentDataPath}/megaverse/";
#else
				return $@"{Application.dataPath}/Third Realm/Data/RuntimeData/";
#endif
			}
		}

		public static string GetDeviceID
		{
			get
			{
#if UNITY_ANDROID && !UNITY_EDITOR
				return SystemInfo.deviceName;
#elif UNITY_STANDALONE || UNITY_EDITOR
				return Environment.MachineName;
#endif
			}
		}

		#endregion // PROPERTIES \\

		#region UNITY CALLBACKS

		private void OnEnable()
		{
			ThirdRealmNetCore.onPhotonEvent += OnEvent;
		}

		private void OnDisable()
		{
			ThirdRealmNetCore.onPhotonEvent -= OnEvent;
		}

		private void Awake()
		{
			s_instance = this;

#if UNITY_STANDALONE || UNITY_EDITOR
			PopulateWhiteListWindows();
#endif

			// Determine if the current experience is a five minute experience
#if UNITY_ANDROID && !UNITY_EDITOR
			PopulateWhiteListAndroid();

			GetIntentData();

			DebugLogger.Log($"[3RC][ApplicationManager]: Five Minute Experience set to {IsFiveMinuteEx}");
#endif

#if THIRD_REALM_EXPERIENCE
			if (megaverseHomeProduct == null)
				DebugLogger.LogError($"[3RC][ApplicationManager]: MegaVerse Home Product not assigned!");
#endif
		}

#endregion // UNITY CALLBACKS \\

#region PUBLIC METHODS

		/// <summary>
		/// Call this method to begin loading an application. Supply the <seealso cref="Product"/>, application specifier, and whether it shouold
		/// be a lite experience or not.
		/// </summary>
		/// <param name="product">The <seealso cref="Product"/> object to attempt to load</param>
		/// <param name="applicationSpecifier">Specifier to verify this is the application we want to load</param>
		/// <param name="isFiveMin">Boolean denoting whether the application we are attempting to load should be a lite experience or not</param>
		public async void StartLoadApplication(Product product, string applicationSpecifier, bool isFiveMin = false)
		{
			if (_isLoading)
				return;

			_isLoading = true;

#if UNITY_STANDALONE || UNITY_EDITOR
			if (ThirdRealmNetCore.Instance.photonConnectionState != ConnectionState.CONNECTED)
			{
				_isLoading = false;

				return;
			}

			if (!File.Exists(Application.dataPath + applicationSpecifier + ".lnk"))
			{
				DebugLogger.LogError($"[3RC][ApplicationManager]: Failed to find application!");

				_isLoading = false;

				return;
			}

			if (ThirdRealmNetCore.PlayerList.Count < 1)
			{
				DebugLogger.LogError($"[3RC][ApplicationManager]: Not enough players in the game to begin the experience!");

				_isLoading = false;

				return;
			}

			NetworkUtils.BasicEvent(InternalEventCode.APP_LOAD_APPLICATION,
									new RemoteEventOptions(ReceiverGroup.Others,
									SendOptions.SendReliable), product.packageName, isFiveMin);

			do
			{
				DebugLogger.Log($"[3RC][ApplicationManager]: Waiting for players to leave!");

				await Task.Yield();
			}
			while (ThirdRealmNetCore.PlayerList.Count > 0);

			LoadApplicationWindows(applicationSpecifier);
#endif // UNITY_STANDALONE || UNITY_EDITOR
		}

		public string GetAppPath(string query)
		{
			foreach (var el in _appPaths)
			{
				if (el.Value == false)
					continue;

				if (el.Key.Contains(query))
					return el.Key;
			}

			DebugLogger.LogError("[3RC][ApplicationManager]: Application Not Found!");

			return string.Empty;
		}

#endregion // PUBLIC METHODS \\

#region PRIVATE METHODS

#if UNITY_STANDALONE || UNITY_EDITOR
		private async void LoadApplicationWindows(string appPath)
		{
			var appAlive = false;
			var filePath = Application.dataPath + appPath + ".lnk";

			await DisconnectAsync();

			try
			{
				Application.OpenURL(@filePath);

				appAlive = true;
				_isLoading = false;
			}
			catch (Exception ex)
			{
				DebugLogger.LogError($"[3RC][ApplicationManager]: Exception occurred! Exception: {ex.Message}");

				appAlive = false;
				_isLoading = false;
			}
			finally
			{
				if (appAlive)
				{
					DebugLogger.Log($"[3RC][ApplicationManager]: Load Application success! Terminating!");

#if !UNITY_EDITOR
					Application.Quit();
#endif // !UNITY_EDITOR
				}
				else
					DebugLogger.LogError($"[3RC][ApplicationManager]: Load Application failed!");
			}
		}
#endif // UNITY_STANDALONE || UNITY_EDITOR

#if UNITY_ANDROID && !UNITY_EDITOR
		private async void LoadApplicationAndroid(string bundleId, bool shouldFiveMin = false)
		{
			bool fail = false;

			AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");

			AndroidJavaObject currentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
			AndroidJavaObject packageManager = currentActivity.Call<AndroidJavaObject>("getPackageManager");
			AndroidJavaObject launchIntent = null;

			try
			{
				launchIntent = packageManager.Call<AndroidJavaObject>("getLaunchIntentForPackage", bundleId);
				launchIntent.Call<AndroidJavaObject>("putExtra", "isFiveMinEx", shouldFiveMin.ToString());
			}
			catch (Exception ex)
			{
				DebugLogger.LogError($"[3RC][ApplicationManager]: Exception occurred! Exception: {ex.Message} | Data: {ex.Data} | Source: {ex.Source}");

				fail = true;
			}

			if (fail)
				DebugLogger.LogError($"[3RC][ApplicationManager]: Failed to open application {bundleId}");
			else
			{
				await DisconnectAsync(true);

				try
				{
					currentActivity.Call("startActivity", launchIntent);
					
					Application.Quit();
				}
				catch (Exception ex)
				{
					DebugLogger.LogError($"[3RC][ApplicationManager]: Exception occurred! Exception: {ex.Message} | Data: {ex.Data} | Source: {ex.Source}");
				}
			}

			unityPlayer.Dispose();
			currentActivity.Dispose();
			packageManager.Dispose();
			launchIntent.Dispose();
		}

		private void GetIntentData()
		{
			DebugLogger.Log("[3RC][ApplicationManager]: Getting activity intent data");

			var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
			
			var currentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
			var intent = currentActivity.Call<AndroidJavaObject>("getIntent");

			AndroidJavaObject extras = null;

			try
			{
				extras = AndroidUtils.GetExtras(ref intent);

				if (extras != null)
				{
					DebugLogger.Log("[3RC][ApplicationManager]: Extras is not null!");

					string isFiveMin = AndroidUtils.GetProperty(ref extras, "isFiveMinEx");

					if (isFiveMin == null)
						isFiveMin = "false";

					IsFiveMinuteEx = isFiveMin.ToLower() == "true";
				}
			}
			catch (Exception ex)
			{
				DebugLogger.LogError($"[3RC][ApplicationManager]: Exception occurred! Exception: {ex.Message} | Data: {ex.Data} | Source: {ex.Source}");
			}

			unityPlayer.Dispose();
			currentActivity.Dispose();
			intent.Dispose();

			if (extras != null)
				extras.Dispose();
		}

		private async void PopulateWhiteListAndroid()
		{
			var externalPath = Application.persistentDataPath;

			DebugLogger.Log($"External storage path: {externalPath}");

			var filePath = @$"{externalPath}/megaverse/whitelist.dat";

			var file = new FileInfo(filePath);

			if (File.Exists(filePath))
			{
				try
				{
					using StreamReader reader = File.OpenText(file.FullName);

					if (reader is null)
						throw new NullReferenceException("StreamReader was null!");

					DebugLogger.Log($"[3RC][ApplicationManager]: Reading whitelist...");

					while (!reader.EndOfStream)
					{
						var line = reader.ReadLine();

						if (line.ToLower().StartsWith("location"))
							LocationIdentifier = line.Split(':')[1];
					}

					// If whitelist doesn't contain a location, request one from the PC Client.
					if (LocationIdentifier == string.Empty)
					{
						await Task.Run(() => {
							while (!ThirdRealmCore.IsNetReady)
								Task.Yield();
						});

						DebugLogger.Log($"[3RC][ApplicationManager]: Sending Request Location Event!");

						NetworkUtils.BasicEvent(InternalEventCode.APP_REQUEST_LOCATION, new RemoteEventOptions(ReceiverGroup.All, SendOptions.SendReliable));
					}
				}
				catch (Exception ex)
				{
					DebugLogger.LogError($"[3RC][ApplicationManager]: Exception occurred! Exception: {ex.Message} | Data: {ex.Data} | Source: {ex.Source}");
				}

				return;
			}

			// Create the file and request the location from the PC client
			file.Directory.Create();

			File.WriteAllText(file.FullName, string.Empty);

			PopulateWhiteListAndroid();
		}

		private void WriteWhitelistAttributesAndroid(string[] attributes)
		{
			var storagePath = Application.persistentDataPath;

			DebugLogger.Log($"Storage path: {storagePath}");

			var filePath = @$"{storagePath}/megaverse/whitelist.dat";

			var file = new FileInfo(filePath);

			if (File.Exists(filePath))
			{
				try
				{
					using StreamWriter writer = new(File.OpenWrite(file.FullName));

					if (writer is null)
						throw new NullReferenceException("StreamWriter was null!");

					foreach (var attribute in attributes)
						writer.WriteLine(attribute);
				}
				catch (Exception ex)
				{
					DebugLogger.LogError($"[3RC][ApplicationManager]: Exception occurred! Exception: {ex.Message} | Data: {ex.Data} | Source: {ex.Source}");
				}
			}
		}

		private void WriteWhitelistAttributesAndroid(string attribute) => WriteWhitelistAttributesAndroid(new string[] { attribute });
#endif // UNITY_ANDROID && !UNITY_EDITOR

		private async Task DisconnectAsync(bool shouldQuit = false)
		{
			DebugLogger.LogWarning("[3RC][ApplicationManager]: Disconnect Called!");

			if (shouldQuit)
				Application.Quit();
		}

		private void ValidateWhiteList()
		{
			var enumerator = _appPaths.GetEnumerator();

			// NOTE: Not secure. Consider revising in the future
			// TODO: Validate the ApplicationData directory for product's complete application data
			while (enumerator.MoveNext())
			{
				if (enumerator.Current.Key.StartsWith("/Third Realm") &&
					enumerator.Current.Key.EndsWith(".exe"))
				{
					var filePath = Application.dataPath + enumerator.Current.Key + ".lnk";

					if (File.Exists(filePath) && enumerator.Current.Value == false)
					{
						_appPaths[enumerator.Current.Key] = true;

						enumerator = _appPaths.GetEnumerator();
					}
				}
			}

			WhiteListCreated = true;
		}

		private void PopulateWhiteListWindows()
		{
			_appPaths = new SerializableDictionary<string, bool>();

			var filePath = Application.dataPath + @"/Third Realm/Data/RuntimeData/whitelist.dat";

			if (File.Exists(filePath))
			{
				try
				{
					using StreamReader reader = File.OpenText(filePath);

					if (reader != null)
						DebugLogger.Log($"[3RC][ApplicationManager]: Reading Application White-list...");
					else
						throw new NullReferenceException("StreamReader was null!");

					while (!reader.EndOfStream)
					{
						var line = reader.ReadLine();

						if (line.ToLower().StartsWith("location"))
						{
							LocationIdentifier = line.Split(':')[1];

							continue;
						}

						_appPaths.Add(line, false);
					}

					reader.Close();
				}
				catch (Exception ex)
				{
					DebugLogger.LogError($"[3RC][ApplicationManager]: Exception occurred! Exception: {ex.Message} | Data: {ex.Data} | Source: {ex.Source}");

					return;
				}
			}

			ValidateWhiteList();
		}

#endregion // PRIVATE METHODS \\

#region Photon Callbacks

		public void OnEvent(EventData photonEvent)
		{
			byte eventCode = photonEvent.Code;

			object[] data = null;

			// Do not respond to built-in photon events
			if (eventCode > 199)
				return;

			DebugLogger.Log($"Received an event: Code {eventCode}");

			try
			{
				if (photonEvent.CustomData is not null)
					data = (object[])photonEvent.CustomData;
			}
			catch (Exception ex)
			{
				DebugLogger.LogError($"[3RC][ApplicationManager]: Exception occurred! Exception: {ex.Message} | Data: {ex.Data} | Source: {ex.Source}");

				data = null;
			}

			switch (eventCode)
			{
				case (byte)InternalEventCode.APP_LOAD_APPLICATION:
					if (data is null)
						return;

					var data0 = (string)data[0];
					var data1 = (bool)data[1];

					DebugLogger.Log($"[3RC][ApplicationManager]: Received application load event data: {data0}" +
						$" | isFiveMinEx: {data1}");

#if UNITY_ANDROID && !UNITY_EDITOR
					LoadApplicationAndroid(data0, data1);
#endif // UNITY_ANDROID && !UNITY_EDITOR
					break;
				case (byte)InternalEventCode.APP_QUIT_APPLICATION:
					DisconnectAsync(true);

					break;
				case (byte)InternalEventCode.NOTIFY_EXPERIENCE_LENGTH:
					if (data is null)
						return;

					ThirdRealmCore.IsNetReady = true;

					if (!PhotonNetwork.IsMasterClient)
						return;

					if (_hasNotifExLen)
						return;

					_hasNotifExLen = true;

					IsFiveMinuteEx = (bool)((object[])photonEvent.CustomData)[0];

					break;
				case (byte)InternalEventCode.APP_REQUEST_LOCATION:
#if UNITY_EDITOR || UNITY_STANDALONE
					var eventOptions = new RemoteEventOptions(ReceiverGroup.All, SendOptions.SendReliable);

					NetworkUtils.BasicEvent(InternalEventCode.APP_RESPOND_LOCATION, eventOptions, LocationIdentifier);
#endif // UNITY_EDITOR || UNITY_STANDALONE
					break;
				case (byte)InternalEventCode.APP_RESPOND_LOCATION:
					if (data is null)
						return;

#if UNITY_ANDROID && !UNITY_EDITOR
					if (LocationIdentifier == string.Empty)
					{
						WriteWhitelistAttributesAndroid($"Location:{(string)data[0]}");
						PopulateWhiteListAndroid();
					}
#endif // UNITY_ANDROIDf && !UNITY_EDITOR
					break;
				case (byte)InternalEventCode.REQUEST_DEVICE_INFO:
#if UNITY_ANDROID && !UNITY_EDITOR
					object[] deviceInfo = {
						GetDeviceID,
						Application.version,
						Wave.Native.Interop.WVR_GetDeviceBatteryPercentage(Wave.Native.WVR_DeviceType.WVR_DeviceType_HMD),
						Wave.Native.Interop.WVR_GetDeviceBatteryPercentage(Wave.Native.WVR_DeviceType.WVR_DeviceType_Controller_Left),
						Wave.Native.Interop.WVR_GetDeviceBatteryPercentage(Wave.Native.WVR_DeviceType.WVR_DeviceType_Controller_Right),
					};

					NetworkUtils.BasicEvent(InternalEventCode.RESPOND_DEVICE_INFO, new RemoteEventOptions(ReceiverGroup.All, SendOptions.SendReliable), deviceInfo);
#endif // UNITY_ANDROID && !UNITY_EDITOR
					break;
			}
		}

#endregion // PHOTON CALLBACKS \\
	}
}
