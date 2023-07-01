using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;

using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;

using ThirdRealm.Debugging;
using ThirdRealm.Networking;
using ThirdRealm.Utils.Extensions;

namespace ThirdRealm
{
	[DefaultExecutionOrder(-3)]
	public sealed class ThirdRealmCore : MonoBehaviour
	{
		#region PUBLIC MEMBERS

		public bool requiresPCMasterClient = true;

#if UNITY_STANDALONE || UNITY_EDITOR
		public bool emulateHmdUser = false;
		public bool spawnLocalAvatar = false;
#endif // UNITY_STANDALONE || UNITY_EDITOR

		public GameObject avatarPrefab;
		public GameObject pcClientPrefab;

		#endregion // PUBLIC VARIABLES \\

		#region PRIVATE VARIABLES

		private static ThirdRealmCore s_instance;

		private Scene _activeScene;

		#endregion // PRIVATE VARIABLES \\

		#region DELEGATES & EVENTS

		public delegate void OnSceneLoadedDelegate(Scene scene, LoadSceneMode loadMode);
		public static event OnSceneLoadedDelegate onSceneLoaded;

		[System.Obsolete("This will be removed in a future update!")]
		public delegate void OnGameOverDelegate();

		#endregion // DELEGATES & EVENTS

		#region PROPERTIES

		public static ThirdRealmCore Instance
		{
			get
			{
				if (s_instance == null)
				{
					s_instance = FindObjectOfType<ThirdRealmCore>();

					if (s_instance == null)
						DebugLogger.LogError("[3RC][ThirdRealmCore]: Instance could not be found!");
				}

				return s_instance;
			}
		}

		public static bool IsNetReady { get; set; } = false;

		public Scene GetCurrentScene
		{
			get => _activeScene;
		}

		[field: SerializeField]
		public Transform LocalPlayer { get; set; } = null;

		[field: SerializeField]
		public bool LocomotionEnabled { get; set; } = false;

		#endregion // PROPERTIES \\

		#region UNITY CALLBACKS

		private void OnEnable()
		{
			SceneManager.sceneLoaded += OnSceneLoaded;
		}

		private void OnDisable()
		{
			SceneManager.sceneLoaded -= OnSceneLoaded;
		}

		private void Awake()
		{
			// If ThirdRealmCore already present, destroy this one
			if (s_instance)
				Destroy(this);

			s_instance = this;

			DontDestroyOnLoad(transform.root);

			// if local player has been manually set, don't create a new one
			if (!LocalPlayer)
			{
#if UNITY_STANDALONE || UNITY_EDITOR
				if (!spawnLocalAvatar)
				{
					//LocalPlayer = Instantiate(pcClientPrefab, Vector3.zero + new Vector3(0f, 1f, 0f), Quaternion.identity).transform;
					LocalPlayer = Instantiate(pcClientPrefab, transform.position, transform.rotation).transform;

					DontDestroyOnLoad(LocalPlayer);
				}
				else
					SpawnLocalAvatar();
#elif UNITY_ANDROID && !UNITY_EDITOR
				SpawnLocalAvatar();
#endif // UNITY_STANDALONE || UNITY_EDITOR elif UNITY_ANDROID && !UNITY_EDITOR

				if (LocalPlayer == null)
					DebugLogger.LogError($"[3RC][ThirdRealmCore]: Local Player was not set!");
			}

			StartCoroutine(StartCheckForPCClient());
		}

		#endregion // UNITY CALLBACKS \\

		#region PUBLIC METHODS

		/// <summary>
		/// Method to begin a scene transition to the next, or previous, scene in the build order.
		/// </summary>
		/// <param name="previous">if marked true, will transition to the previous scene. Otherwise this client will move on to the next scene</param>
		public void TransitionScene(bool previous = false) => TransitionScene((previous) ? GetCurrentScene.buildIndex - 1 : GetCurrentScene.buildIndex + 1);

		/// <summary>
		/// Method to begin a scene transition to a specific scene index.
		/// </summary>
		/// <param name="sceneIndex">The scene index to attempt to transition to</param>
		public void TransitionScene(int sceneIndex) => ThirdRealmNetCore.Instance.StartTransitionScene(sceneIndex);

		#endregion // PUBLIC METHODS \\

		#region PRIVATE METHODS

		private IEnumerator StartCheckForPCClient()
		{
			while (ThirdRealmNetCore.Instance != null && !IsNetReady)
			{
				DebugLogger.Log("Awaiting PC Has Master!");

				yield return new WaitForEndOfFrame();
			}
		}

		private void OnSceneLoaded(Scene scene, LoadSceneMode loadMode)
		{
			_activeScene = scene;

			onSceneLoaded?.Invoke(scene, loadMode);
		}

		private void SpawnLocalAvatar()
		{
			var rig = Instantiate(avatarPrefab, Vector3.zero + new Vector3(0f, 1f, 0f), Quaternion.identity).transform;

			DontDestroyOnLoad(rig);

			LocalPlayer = rig.GetComponentInChildren<BNG.BNGPlayerController>().transform;

			LocalPlayer.GetComponent<BNG.LocomotionManager>().enabled = LocomotionEnabled;
			LocalPlayer.GetComponent<BNG.PlayerRotation>().enabled = LocomotionEnabled;
		}

		#endregion // PRIVATE METHODS \\
	}
}
