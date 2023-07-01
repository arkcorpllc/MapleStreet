using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using System.Threading.Tasks;

using UnityEngine;
using UnityEngine.SceneManagement;

#if UNITY_ANDROID && !UNITY_EDITOR
using UnityEngine.Android;
#endif // UNITY_ANDROID && !UNITY_EDITOR

using ExitGames.Client.Photon;
using Hashtable = ExitGames.Client.Photon.Hashtable;
using Photon.Realtime;
using Photon.Pun;
using Photon.Voice.PUN;
using Photon.Voice.Unity;

using ThirdRealm.MegaBrain;
using ThirdRealm.Utils;
using ThirdRealm.Utils.NetExtensions;
using ThirdRealm.Debugging;

using MegaBrainClass = ThirdRealm.MegaBrain.MegaBrain;
using UtilsClass = ThirdRealm.Utils.Utils;

namespace ThirdRealm.Networking
{
	#region ENUMS

	/// <summary>
	/// Network Connection Mode for development & production purposes
	/// </summary>
	public enum ConnectionMode
	{
		OFFLINE, DEVELOPMENT, RELEASE
	}

	/// <summary>
	/// Network connection state for various networking systems
	/// </summary>
	public enum ConnectionState
	{
		DISCONNECTED,
		DISCONNECTING,
		CONNECTING,
		CONNECTED
	}

	#endregion // ENUMS \\

	[DefaultExecutionOrder(-1)]
	public sealed class ThirdRealmNetCore : MonoBehaviourPunCallbacks, IOnEventCallback
	{
		#region PUBLIC VARIABLES

		// MegaBrain Settings
		public bool usesMegabrain = true;

		public NetworkSettings defaultServerSettings;

		// Photon Settings
		public string nameOfLobby;

		[Range(1, 12)]
		public byte MAXPLAYERS = 7;

		public bool isOpen = true;
		public bool isVisible = true;
		public bool autoConnectNetwork = true;

		public GameObject networkAvatarPrefab;
		public GameObject pcClientNetPrefab;

		// CONSIDER: Hide In Inspector
		public ConnectionMode connectionMode = ConnectionMode.DEVELOPMENT;

		public ConnectionState photonConnectionState = ConnectionState.DISCONNECTED;
		public ConnectionState voiceConnectionState = ConnectionState.DISCONNECTED;
		public ConnectionState megabrainConnectionState = ConnectionState.DISCONNECTED;

		// Photon Voice Settings
		public bool isVoiceEnabled = false;

		#endregion // PUBLIC VARIABLES \\

		#region PRIVATE VARIABLES

		private static ThirdRealmNetCore s_instance;

		private readonly string _GAMEVERSION = "1.0";

		// Debug Settings
		[SerializeField]
		private bool _getPing = false;

		// DISPLAY ONLY
		[SerializeField]
		private int _photonPing = 0;

		// DISPLAY ONLY
		[SerializeField]
		private int _megabrainPing = 0;

		[SerializeField]
		private int _voicePing = 0;

		private Hashtable _roomProperties;

		private TypedLobby _gameLobby;

		private Dictionary<string, RoomInfo> _cachedRoomList;

		private Task _tryUpdateConnectionStateTask;

		private byte _activePlayers = 0;

		private bool _wantsToQuit = false;

		#endregion // PRIVATE VARIABLES \\

		#region Delegates & Events

		public delegate Task OnSceneTransitionDelegate();
		public static event OnSceneTransitionDelegate onSceneTransition;

		public delegate void OnPhotonEventDelegate(EventData data);
		public static event OnPhotonEventDelegate onPhotonEvent;

		#endregion // DELEGATES & EVENTS \\

		#region PROPERTIES

		public static ThirdRealmNetCore Instance
		{
			get
			{
				if (s_instance == null)
				{
					DebugLogger.LogWarning("[3RC][ThirdRealmNetCore]: No NetCore component found!");

					return null;
				}

				return s_instance;
			}
		}

		/// <summary>
		/// Returns the number of players in the room <u><b>including</b></u> the master client
		/// </summary>
		public byte GetNumPlayers
		{
			get
			{
				if (!(photonConnectionState == ConnectionState.CONNECTED))
				{
					DebugLogger.LogError("NOT CONNECTED TO PHOTON!");

					return 255;
				}

				if (PhotonNetwork.CurrentRoom == null)
				{
					DebugLogger.LogError("NO ROOM!");

					return 255;
				}

				return PhotonNetwork.CurrentRoom.PlayerCount;
			}
		}

		/// <summary>
		/// Returns the number of players in the room <u><b>excluding</b></u> the master client
		/// </summary>
		public static List<Player> PlayerList { get; private set; }

		/// <summary>
		/// The number of players that have sent the <i>NOTIFY_PLAYER_ACTIVE</i> network event code
		/// </summary>
		public uint ActivePlayersCount
		{
			get { return _activePlayers; }
		}

		#endregion // PROPERTIES \\

		#region UNITY CALLBACKS

		public override void OnEnable()
		{
			base.OnEnable();

			onSceneTransition += OnSceneTransition;

			MegaBrainClass.onDisconnected += OnMegaBrainDisconnect;
			ThirdRealmCore.onSceneLoaded += OnSceneLoaded;

			PhotonNetwork.AddCallbackTarget(this);
		}

		public override void OnDisable()
		{
			base.OnDisable();

			onSceneTransition -= OnSceneTransition;

			MegaBrainClass.onDisconnected -= OnMegaBrainDisconnect;
			ThirdRealmCore.onSceneLoaded -= OnSceneLoaded;

			PhotonNetwork.RemoveCallbackTarget(this);
		}

		private void Awake()
		{
			s_instance = this;

#if UNITY_ANDROID && !UNITY_EDITOR
			RequestAndroidPermissions();
#endif // UNITY_ANDROID && !UNITY_EDITOR

#if UNITY_STANDALONE || UNITY_EDITOR
			if (ThirdRealmCore.Instance.spawnLocalAvatar)
				autoConnectNetwork = true;
#endif // UNITY_STANDALONE || UNITY_EDITOR

			if (autoConnectNetwork)
			{
				var err = Connect(); // Auto-connect

				if (err)
					DebugLogger.LogError("[3RC][ThirdRealmNetCore]: Failed to connect to network!");
			}
		}

		private void Update()
		{
			if (_wantsToQuit)
				return;

			// NOTE: Reconsider this implementation
			if (_tryUpdateConnectionStateTask != null)
				if (_tryUpdateConnectionStateTask.IsCompleted)
					_tryUpdateConnectionStateTask = Task.Run(TryUpdateConnectionStateAsync);

			if (photonConnectionState != ConnectionState.CONNECTED)
				return;

			if (GetNumPlayers.Equals(255))
				return;

			// DEBUGGING
			foreach (var player in PhotonNetwork.PlayerList)
			{
				DebugLogger.Log($"[3RC][ThirdRealmNetCore]: Number of Active Players (includes PC): {PhotonNetwork.PlayerList.Length}" +
						  $"Actor Number: {player.ActorNumber} | " +
						  $"User ID: {player.UserId}");
			}
			// END DEBUGGING

			if (PlayerList.Count != GetNumPlayers - 1)
			{
				PlayerList.Clear();

				for (int i = 0; i < GetNumPlayers; i++)
				{
					var player = PhotonNetwork.PlayerList[i];

					if (player.IsMasterClient)
						continue;

					PlayerList.Add(player);
				}

				for (int i = 0; i < PlayerList.Count; i++)
					PlayerList[i].NickName = $"Player {i + 1}";
			}

			// Ping Photon and the MegaBrain
			if (_getPing)
			{
				_photonPing = PhotonNetwork.GetPing();

				if (usesMegabrain)
					_megabrainPing = MegaBrainClass.GetPing();

				if (isVoiceEnabled)
					_voicePing = PhotonVoiceNetwork.Instance.GetPing();
			}
		}

		#endregion // UNITY CALLBACKS \\

		#region PUBLIC METHODS

		/// <summary>
		/// Asynchronous method to begin a scene transition. Waits for all attached delegates to finish invoking before loading the next scene.
		/// </summary>
		/// <param name="sceneIndex">The scene index to load</param>
		public async void StartTransitionScene(int sceneIndex)
		{
			if (!PhotonNetwork.AutomaticallySyncScene)
				DebugLogger.LogWarning($"[3RC][ThirdRealmNetCore]: AutomaticallySyncScene set to false!");

			var delegateTasks = onSceneTransition.GetInvocationList()
												 .Cast<OnSceneTransitionDelegate>()
												 .Select(del => del.Invoke());

			await Task.WhenAll(delegateTasks);

			if (!PhotonNetwork.IsMasterClient)
				return;

			PhotonNetwork.LoadLevel(sceneIndex);
		}

		/// <summary>
		/// When called by the PC client, broadcast the <i>APP_QUIT_APPLICATION</i> event code to other users
		/// to notify them to quit their respective applications, as well.
		/// </summary>
		public void QuitApplication()
		{
#if UNITY_STANDALONE || UNITY_EDITOR
			if (photonConnectionState == ConnectionState.CONNECTED)
				NetworkUtils.BasicEvent(InternalEventCode.APP_QUIT_APPLICATION,
										new RemoteEventOptions(ReceiverGroup.All, SendOptions.SendReliable));
#endif // UNITY_STANDALONE || UNITY_EDITOR
		}

		/// <summary>
		/// Call this method to connect to all network peripherals required for this experience.
		/// </summary>
		/// <returns>
		/// true if there was an error<br/>
		/// false if successful
		/// </returns>
		public bool Connect()
		{
			if (usesMegabrain)
			{
				var megaBrainBridge = FindObjectOfType<MegaBrainBridge>();

				if (megaBrainBridge == null)
				{
					var mbbObj = new GameObject("MegaBrainBridge");

					mbbObj.transform.parent = transform;
					mbbObj.AddComponent<MegaBrainBridge>();
				}

				MegaBrainClass.ipAddress = defaultServerSettings.megabrainServer;
				MegaBrainClass.port = defaultServerSettings.megabrainPort;

				var err = MegaBrainClass.Connect();

				if (err)
				{
					megabrainConnectionState = ConnectionState.DISCONNECTED;

					DebugLogger.LogError($"[3RC][ThirdRealmNetCore]: Error encountered when connecting to MegaBrain!");

					return err;
				}

				megabrainConnectionState = ConnectionState.CONNECTED;
			}

			InitializePhotonSettings();

			PhotonNetwork.ConnectUsingSettings();

			_tryUpdateConnectionStateTask = TryUpdateConnectionStateAsync();

			return false;
		}

		/// <summary>
		/// Disconnect this client from all network services utilized by this application
		/// </summary>
		public void Disconnect()
		{
			if (isVoiceEnabled)
				PhotonVoiceNetwork.Instance.Disconnect();

			if (PhotonNetwork.IsConnectedAndReady)
			{
				PhotonNetwork.LeaveRoom();
				PhotonNetwork.LeaveLobby();
				PhotonNetwork.Disconnect();
			}

			if (megabrainConnectionState == ConnectionState.CONNECTED)
				MegaBrainClass.Disconnect();

			photonConnectionState = voiceConnectionState = megabrainConnectionState = ConnectionState.DISCONNECTED;

			_wantsToQuit = true;
		}

		#endregion // PUBLIC METHODS \\

		#region PRIVATE METHODS

		private void SpawnAvatar()
		{
#if UNITY_ANDROID && !UNITY_EDITOR
			var remoteAvatar = PhotonNetwork.Instantiate(networkAvatarPrefab.name,
														 ThirdRealmCore.Instance.LocalPlayer.position,
														 ThirdRealmCore.Instance.LocalPlayer.rotation);

			var np = remoteAvatar.GetComponent<BNG.NetworkPlayer>();

			if (np != null)
				np.AssignPlayerObjects();

#elif UNITY_STANDALONE || UNITY_EDITOR
			var prefabName = (ThirdRealmCore.Instance.spawnLocalAvatar) ? networkAvatarPrefab.name : pcClientNetPrefab.name;
			var remoteAvatar = PhotonNetwork.Instantiate(prefabName,
														 ThirdRealmCore.Instance.LocalPlayer.position,
														 ThirdRealmCore.Instance.LocalPlayer.rotation);

			if (ThirdRealmCore.Instance.spawnLocalAvatar)
			{
				var np = remoteAvatar.GetComponent<BNG.NetworkPlayer>();

				if (np != null)
					np.AssignPlayerObjects();
			}
			else
			{
				var pcmcnh = remoteAvatar.GetComponent<PCClient.PCMasterClientNetHelper>();

				if (pcmcnh != null)
					pcmcnh.AssignPlayerObjects();
			}
#endif // UNITY_ANDROID && !UNITY_EDITOR elif UNITY_STANDALONE || UNITY_EDITOR

			remoteAvatar.name = "MyRemoteAvatar";
		}

		private async void Reconnect()
		{
			// TODO: Make this happen through Photon (PhotonNetwork.Reconnect())

			Disconnect();

			Task<bool> awaiter = WaitForDisconnectionAsync();

			await awaiter;

			if (awaiter.Result == true)
				Connect();
			else
				DebugLogger.LogError("[3RC][ApplicationManager]: Failed to reconnect to the network!");
		}

		private void InitializePhotonSettings()
		{
			if (PhotonNetwork.PhotonServerSettings.AppSettings.UseNameServer)
			{
				PhotonNetwork.NetworkingClient.SerializationProtocol = SerializationProtocol.GpBinaryV18;
				PhotonNetwork.PhotonServerSettings.AppSettings.Server = "";
				PhotonNetwork.PhotonServerSettings.AppSettings.Port = 0;
			}
			else
			{
				PhotonNetwork.NetworkingClient.SerializationProtocol = SerializationProtocol.GpBinaryV16;
				PhotonNetwork.PhotonServerSettings.AppSettings.Server = defaultServerSettings.photonServer;
				PhotonNetwork.PhotonServerSettings.AppSettings.Port = defaultServerSettings.photonPort;
			}

			PhotonNetwork.GameVersion = _GAMEVERSION;
			PhotonNetwork.AutomaticallySyncScene = true;

			if (connectionMode == ConnectionMode.OFFLINE)
			{
				PhotonNetwork.OfflineMode = true;

				isVoiceEnabled = false;
			}

			_gameLobby = new TypedLobby(nameOfLobby + "_Lobby", LobbyType.Default);

			_cachedRoomList = new Dictionary<string, RoomInfo>();

			_roomProperties = new Hashtable();

			PlayerList = new List<Player>();
		}

		private void OnMegaBrainDisconnect() => megabrainConnectionState = ConnectionState.DISCONNECTED;

		private async Task<bool> WaitForDisconnectionAsync()
		{
			while (photonConnectionState != ConnectionState.DISCONNECTED)
			{
				DebugLogger.Log($"[3RC][ThirdRealmNetCore]: Waiting for disconnection...");

				await Task.Yield();
			}


			return photonConnectionState == ConnectionState.DISCONNECTED;
		}

		private async Task TryUpdateConnectionStateAsync()
		{
			var photonConnectionState = TrackConnectionStateAsync(PhotonNetwork.NetworkClientState);

			await photonConnectionState;

			DetermineConnectionState(false, photonConnectionState.Result);

			if (isVoiceEnabled)
			{
				var voiceConnectionState = TrackConnectionStateAsync(PhotonVoiceNetwork.Instance.ClientState);

				await voiceConnectionState;

				DetermineConnectionState(true, voiceConnectionState.Result);
			}
		}

		private void DetermineConnectionState(bool voice, uint stateCode)
		{
			switch (stateCode)
			{
				case 101: // Authenticating
				case 102: // Authenticated
				case 110: // ConnectingToNameServer
				case 111: // ConnectingToMasterServer
				case 112: // ConnectingToGameServer
				case 120: // ConnectedToNameServer
				case 121: // ConnectedToMasterServer
				case 122: // ConnectedToGameServer
				case 150: // JoiningLobby
				case 151: // Joining
				case 152: // JoinedLobby
				case 170: // PeerCreated
					if (!voice)
						photonConnectionState = ConnectionState.CONNECTING;
					else
						voiceConnectionState = ConnectionState.CONNECTING;
					break;
				case 130: // DisconnectingFromNameServer
				case 131: // DisconnectingFromMasterServer
				case 132: // DisconnectingFromGameServer
				case 140: // Disconnecting
				case 160: // Leaving
					if (!voice)
						photonConnectionState = ConnectionState.DISCONNECTING;
					else
						voiceConnectionState = ConnectionState.DISCONNECTING;
					break;
				case 141: // Disconnected
					if (!voice)
						photonConnectionState = ConnectionState.DISCONNECTED;
					else
						voiceConnectionState = ConnectionState.DISCONNECTED;
					break;
				case 153: // Joined
					if (!voice)
						photonConnectionState = ConnectionState.CONNECTED;
					else
						voiceConnectionState = ConnectionState.CONNECTED;
					break;
				default:
					DebugLogger.LogError("[3RC][ThirdRealmNetCore]: Something went horribly wrong here...");
					break;
			}
		}

		private async Task<uint> TrackConnectionStateAsync(ClientState clientState)
		{
			await Task.Yield();

			// Track Photon Network Connection
			switch (clientState)
			{
				case ClientState.Authenticating:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Authenticating...");
					return 101;
				case ClientState.Authenticated:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Authenticated...");
					return 102;
				case ClientState.ConnectingToNameServer:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Connecting to Name Server...");
					return 110;
				case ClientState.ConnectingToMasterServer:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Connecting to Master Server...");
					return 111;
				case ClientState.ConnectingToGameServer:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Connecting to Game Server...");
					return 112;
				case ClientState.ConnectedToNameServer:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Connected to Name Server.");
					return 120;
				case ClientState.ConnectedToMasterServer:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Connected to Master Server.");
					return 121;
				case ClientState.ConnectedToGameServer:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Connected to Game Server.");
					return 122;
				case ClientState.DisconnectingFromNameServer:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Disconnecting from Name Server...");
					return 130;
				case ClientState.DisconnectingFromMasterServer:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Disconnecting from Master Server...");
					return 131;
				case ClientState.DisconnectingFromGameServer:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Disconnecting from Game Server...");
					return 132;
				case ClientState.Disconnecting:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Disconnecting from Photon...");
					return 140;
				case ClientState.Disconnected:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Disconnected from Photon.");
					return 141;
				case ClientState.JoiningLobby:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Joining Photon lobby...");
					return 150;
				case ClientState.Joining:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Joining Photon Room...");
					return 151;
				case ClientState.JoinedLobby:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Joined Photon Lobby.");
					return 152;
				case ClientState.Joined:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Joined Photon Room.");
					return 153;
				case ClientState.Leaving:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Leaving Photon Room...");
					return 160;
				case ClientState.PeerCreated:
					DebugLogger.Log("[3RC][ThirdRealmNetCore]: Photon Peer Created.");
					return 170;
			}

			return 1;
		}

		private IEnumerator WaitForPCMasterClient()
		{
			// If we are emulating a headset, just return.
			// We do not want to become the Master Client
#if UNITY_EDITOR || UNITY_STANDALONE
			if (ThirdRealmCore.Instance.emulateHmdUser)
				yield break;
#endif

			// CONSIDER: Adding a timeout exception & handling it
			// Attempt to become the master client
			while (PhotonNetwork.MasterClient != PhotonNetwork.LocalPlayer)
			{
				yield return new WaitForSecondsRealtime(3);

				DebugLogger.Log($"[3RC][ThirdRealmNetCore]: Waiting to become the master client...");


				if (PhotonNetwork.SetMasterClient(PhotonNetwork.LocalPlayer))
				{
					_roomProperties = PhotonNetwork.CurrentRoom.CustomProperties;

					break;
				}
				else
					DebugLogger.LogError("[3RC][ThirdRealmNetCore]: Failed to set PC as master client!");
			}

#if UNITY_EDITOR
			if (ThirdRealmCore.Instance.spawnLocalAvatar || PlayerList.Count == 0)
				ThirdRealmCore.IsNetReady = true;
#endif // UNITY_EDITOR

			NetworkUtils.BasicEvent(InternalEventCode.NOTIFY_PC_IS_MASTER,
									new RemoteEventOptions(ReceiverGroup.Others, SendOptions.SendReliable),
									true);
		}

		private async void OnSceneLoaded(Scene scene, LoadSceneMode mode)
		{
			await UtilsClass.TimeoutAfterAsync(ct => WaitForNetwork(ct),
											   new TimeSpan(0, 0, 20),
											   new CancellationTokenSource().Token);

			var eventOptions = new RemoteEventOptions(ReceiverGroup.All,
													  SendOptions.SendReliable,
													  EventCaching.AddToRoomCache);

			NetworkUtils.BasicEvent(InternalEventCode.NOTIFY_PLAYER_ACTIVE, eventOptions, (byte)1);
		}

		private async Task OnSceneTransition()
		{
			// (PC) Master Client Only
			if (PhotonNetwork.IsMasterClient)
			{
				// Clear event from event cache
				var eventOptions = new RemoteEventOptions(ReceiverGroup.All,
														  SendOptions.SendReliable,
														  EventCaching.RemoveFromRoomCache);

				NetworkUtils.BasicEvent(InternalEventCode.NOTIFY_PLAYER_ACTIVE, eventOptions);

				// Notify existing users to reset activePlayers back to 0
				eventOptions = new RemoteEventOptions(ReceiverGroup.All, SendOptions.SendReliable);

				NetworkUtils.BasicEvent(InternalEventCode.NOTIFY_PLAYER_ACTIVE, eventOptions, (byte)0);
			}

			await Task.Run(() =>
			{
				while (_activePlayers > 0)
				{
					DebugLogger.Log("Waiting for active players to be zero!");

					Task.Yield();
				}
			});
		}

		private async Task WaitForNetwork(CancellationToken _)
		{
			while (PhotonNetwork.CurrentRoom == null || !PhotonNetwork.IsMessageQueueRunning)
				await Task.Yield();
		}

		private void UpdateCachedRoomList(List<RoomInfo> roomList)
		{
			for (int i = 0; i < roomList.Count; i++)
			{
				var info = roomList[i];

				if (info.RemovedFromList)
					_cachedRoomList.Remove(info.Name);
				else
					_cachedRoomList[info.Name] = info;
			}
		}

		private async void ConnectVoiceServer()
		{
			DebugLogger.Log($"[3RC][ThirdRealmNetCore]: Connecting Photon Voice Network");

			PhotonVoiceNetwork.Instance.PrimaryRecorder = FindObjectOfType<Recorder>();

			if (PhotonVoiceNetwork.Instance.PrimaryRecorder == null)
				DebugLogger.LogError("[3RC][ThirdRealmNetCore]: Failed to find Recorder component in the Scene!");

			PhotonVoiceNetwork.Instance.ConnectAndJoinRoom();

			var startTime = Time.time;

			do
			{
				if (Time.time - startTime >= 15f)
				{
					DebugLogger.LogError("Voice server connection timed out!");

					isVoiceEnabled = false;
					voiceConnectionState = ConnectionState.DISCONNECTED;

					return;
				}

				DebugLogger.Log("Connecting to voice server...");

				await Task.Yield();
			} while (voiceConnectionState != ConnectionState.CONNECTED);

#if UNITY_ANDROID && !UNITY_EDITOR
			PhotonVoiceNetwork.Instance.Client.OpChangeGroups(null, new byte[] { 1 });
			PhotonVoiceNetwork.Instance.PrimaryRecorder.InterestGroup = 1;
#elif UNITY_STANDALONE || UNITY_EDITOR
			var interestGroup = (byte)(ThirdRealmCore.Instance.emulateHmdUser && ThirdRealmCore.Instance.spawnLocalAvatar ? 1 : 2);

			PhotonVoiceNetwork.Instance.Client.OpChangeGroups(null, new byte[] { interestGroup });
			PhotonVoiceNetwork.Instance.PrimaryRecorder.InterestGroup = interestGroup;
#endif
		}

#if UNITY_ANDROID && !UNITY_EDITOR
		private void RequestAndroidPermissions()
		{
			if (!Permission.HasUserAuthorizedPermission(Permission.ExternalStorageRead))
				Permission.RequestUserPermission(Permission.ExternalStorageRead);

			if (!Permission.HasUserAuthorizedPermission(Permission.ExternalStorageWrite))
				Permission.RequestUserPermission(Permission.ExternalStorageWrite);

			if (isVoiceEnabled)
				if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
					Permission.RequestUserPermission(Permission.Microphone);
		}
#endif // UNITY_ANDROID  && !UNITY_EDITOR

		#endregion // PRIVATE METHODS \\ 

		#region PHOTON CALLBACKS

		public override void OnConnected()
		{
			DebugLogger.Log("[3RC][ThirdRealmNetCore]: OnConnected() was called!");
		}

		public override void OnDisconnected(DisconnectCause cause)
		{
			DebugLogger.Log($"[3RC][ThirdRealmNetCore]: OnDisconnected() was called! Reason: {cause}");

			_cachedRoomList.Clear();

			switch (cause)
			{
				case DisconnectCause.ClientTimeout:
				case DisconnectCause.ServerTimeout:
					Reconnect();
					break;
				default:
					MegaBrainClass.Disconnect();
					break;
			}
		}

		public override void OnCreatedRoom()
		{
			DebugLogger.Log($"[3RC][ThirdRealmNetCore]: OnCreatedRoom() was called!");
		}

		public override void OnJoinedRoom()
		{
			DebugLogger.Log("[3RC][ThirdRealmNetCore]: OnJoinedRoom() was called...");
			DebugLogger.Log("[3RC][ThirdRealmNetCore]: " +
							$"Lobby Stats: Name: {PhotonNetwork.CurrentLobby.Name}, " +
							$"Lobby Type: {PhotonNetwork.CurrentLobby.Type}, " +
							$"Room Stats: Name: {PhotonNetwork.CurrentRoom.Name}, " +
							$"# of Players: {PhotonNetwork.CurrentRoom.PlayerCount}, " +
							$"Offline: {PhotonNetwork.CurrentRoom.IsOffline}, " +
							$"Open: {PhotonNetwork.CurrentRoom.IsOpen}, " +
							$"Visible: {PhotonNetwork.CurrentRoom.IsVisible}");

			if (isVoiceEnabled)
				ConnectVoiceServer();
			else
			{
				DebugLogger.LogWarning("[3RC][ThirdRealmNetCore]: Voice chat disabled. Removing voice components");

				if (PhotonVoiceNetwork.Instance != null)
					Destroy(PhotonVoiceNetwork.Instance);
			}

			SpawnAvatar();

#if UNITY_STANDALONE || UNITY_EDITOR
			StartCoroutine(WaitForPCMasterClient());
#endif // UNITY_STANDALONE || UNITY_EDITOR
		}

		public override void OnConnectedToMaster()
		{
			DebugLogger.Log($"[3RC][ThirdRealmNetCore]: OnConnectedToMaster() was called!");

			PhotonNetwork.JoinLobby(_gameLobby);
		}

		public override void OnJoinedLobby()
		{
			DebugLogger.Log($"[3RC][ThirdRealmNetCore]: OnJoinedLobby() was called!");

			_cachedRoomList.Clear();

			if (connectionMode == ConnectionMode.DEVELOPMENT)
			{
				PhotonNetwork.JoinOrCreateRoom($"{nameOfLobby}_DevRoom", new RoomOptions
				{
					MaxPlayers = MAXPLAYERS,        // Dev rooms should be similar to production/release rooms
					IsOpen = isOpen,                // The room should be open for joining
					IsVisible = isVisible,          // The room should be visible to the lobby
					PlayerTtl = 10000,              // Player Time-to-Live in ms upon disconnecting
					EmptyRoomTtl = 3000,            // The Time-to-Live in ms upon the room becoming empty
					PublishUserId = true,           // Whether player user-id's should be published over the network
					CleanupCacheOnLeave = true,     // Whether to clean cached events upon leaving the room
				}, _gameLobby, null);
			}
			else if (connectionMode == ConnectionMode.OFFLINE)
			{
				PhotonNetwork.CreateRoom($"{nameOfLobby}_OfflineRoom", new RoomOptions
				{
					MaxPlayers = 1,                 // Offline rooms should only contain one player
					IsOpen = isOpen = false,        // The room should be closed for joining
					IsVisible = isVisible = false,  // The room should not be visible to the lobby
					PlayerTtl = 10000,              // Player Time-to-Live in ms upon disconnecting
					EmptyRoomTtl = 3000,            // The Time-to-Live in ms upon the room becoming empty
					PublishUserId = true,           // Whether player user-id's should be published over the network
					CleanupCacheOnLeave = true,     // Whether to clean cached events upon leaving the room
				}, _gameLobby, null);
			}
			else
				PhotonNetwork.JoinOrCreateRoom($"{nameOfLobby}_Room", new RoomOptions
				{
					MaxPlayers = MAXPLAYERS,        // Max players to the room
					IsOpen = isOpen = true,         // The room should be open for joining
					IsVisible = isVisible = true,   // The room should be visible to the lobby
					PlayerTtl = 10000,              // Player Time-to-Live in ms upon disconnecting
					EmptyRoomTtl = 3000,            // The Time-to-Live in ms upon the room becoming empty
					PublishUserId = true,           // Whether player user-id's should be published over the network
					CleanupCacheOnLeave = true,     // Whether to clean cached events upon leaving the room
				}, _gameLobby, null);
		}

		public override void OnLeftLobby()
		{
			DebugLogger.Log($"[3RC][ThirdRealmNetCore]: OnLeftLobby() was called!");

			_cachedRoomList.Clear();
		}

		public override void OnRoomListUpdate(List<RoomInfo> roomList)
		{
			DebugLogger.Log($"[3RC][ThirdRealmNetCore]: OnRoomListUpdate() was called! RoomList: {roomList.ToStringFull()}");

			UpdateCachedRoomList(roomList);
		}

		public override void OnCreateRoomFailed(short returnCode, string message)
		{
			DebugLogger.Log($"[3RC][ThirdRealmNetCore]: OnCreateRoomFailed() was called with code: {returnCode} & reason: {message}");
		}

		public override void OnJoinRoomFailed(short returnCode, string message)
		{
			DebugLogger.Log($"[3RC][ThirdRealmNetCore]: OnJoinRoomFailed() was called with code: {returnCode} & reason: {message}");
		}

		public override void OnJoinRandomFailed(short returnCode, string message)
		{
			DebugLogger.Log($"[3RC][ThirdRealmNetCore]: OnJoinRandomFailed() was called with code: {returnCode} & reason: {message}");
		}

		public override void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
		{
			DebugLogger.Log($"[3RC][ThirdRealmNetCore]: Room properties updated! Properties that changed: [{propertiesThatChanged.ToStringFull()}]");

			_roomProperties = PhotonNetwork.CurrentRoom.CustomProperties;
		}

		public override void OnMasterClientSwitched(Player newMasterClient)
		{
			DebugLogger.Log($"[3RC][ThirdRealmNetCore]: Master Client switched! New Client: {newMasterClient.ActorNumber}");

			PlayerList.Clear(); // Clear the player list so that it can be refreshed without the new Master Client
		}

		public void OnEvent(EventData data)
		{
			switch (data.Code)
			{
				case (byte)InternalEventCode.NOTIFY_PC_IS_MASTER:
					// NOTE: Probably not the best way of implementing this but should be fine for the time being
					NetworkUtils.BasicEvent(InternalEventCode.NOTIFY_EXPERIENCE_LENGTH,
											new RemoteEventOptions(ReceiverGroup.All, SendOptions.SendReliable),
											ApplicationManager.IsFiveMinuteEx);

					break;
				case (byte)InternalEventCode.NOTIFY_PLAYER_ACTIVE:
					if ((byte)((object[])data.CustomData)[0] == 0)
						_activePlayers = 0;
					else
						_activePlayers += 1;

					break;
				case (byte)InternalEventCode.MEGABRAIN_HAPTIC_TRIGGERED:
					{
						var content = (object[])data.CustomData;

						MegaBrainBridge.Instance.TriggerHapticNetworked((HapticType)content[0]);
					}

					break;
			}

			onPhotonEvent?.Invoke(data);
		}

		#endregion // PHOTON CALLBACKS \\
	}
}
