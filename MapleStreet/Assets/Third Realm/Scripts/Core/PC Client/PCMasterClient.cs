using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.InputSystem;

using Photon.Voice.Unity;

using ThirdRealm.Debugging;

namespace ThirdRealm.PCClient
{
	using Networking;

	public class PCMasterClient : MonoBehaviour
	{
		private static PCMasterClient instance;

		public Recorder recorder;

		public Transform head;

		public float moveSpeed = 2f;

		public float sensitivityX = 10f;
		public float sensitivityY = 10f;

		public float minimumY = -60f;
		public float maximumY = 60f;

		public int currentPlayer = 0;
		public int previousPlayer = 0;

		private Vector2 _rotationVector;

		private float _forward = 0f;
		private float _rightward = 0f;
		private float _rotationY = 0f;

		[SerializeField]
		private bool _isLockedToPlayer = false;

		[SerializeField]
		private bool _isMicActive = false;

		#region PROPERTIES

		public static PCMasterClient Instance
		{
			get
			{
				if (!instance)
					instance = FindObjectOfType<PCMasterClient>();

				if (!instance)
					DebugLogger.LogError("Could not find PCMasterClient instance!");

				return instance;
			}
		}

		public bool GetMicState
		{
			get	{ return _isMicActive; }
		}

		#endregion // PROPERTIES \\

		#region UNITY CALLBACKS

		private void Awake()
		{
			instance = this;

			if (recorder == null)
				recorder = FindObjectOfType<Recorder>();

			if (recorder == null)
				DebugLogger.LogWarning("[3RC][PCMasterClient]: Failed to find Photon Recorder component!");
		}

		private void Update()
		{
			ProcessInput();

			if (_isMicActive && !recorder.TransmitEnabled)
				recorder.TransmitEnabled = true;
			else if (!_isMicActive && recorder.TransmitEnabled)
				recorder.TransmitEnabled = false;
		}

		#endregion // UNITY CALLBACKS \\

		private void ProcessInput()
		{
			// Mouse
			if (Mouse.current.rightButton.isPressed)
			{
				if (_isLockedToPlayer)
				{
					_isLockedToPlayer = false;

					transform.localEulerAngles = new Vector3(0f, transform.localEulerAngles.y, 0f);
				}

				Cursor.lockState = CursorLockMode.Locked;

				ProcessRotation();
				ProcessMovement();
			}
			else
				Cursor.lockState = CursorLockMode.None;

			// Mock User Perspective
			if (_isLockedToPlayer && ThirdRealmNetCore.PlayerList.Count > 0)
			{
				DebugLogger.Log(currentPlayer);
				DebugLogger.Log("NickName: " + ThirdRealmNetCore.PlayerList[currentPlayer].NickName +
						  "IsMaster: " + ThirdRealmNetCore.PlayerList[currentPlayer].IsMasterClient +
						  "UserID: " + ThirdRealmNetCore.PlayerList[currentPlayer].UserId +
						  "ActorNum: " + ThirdRealmNetCore.PlayerList[currentPlayer].ActorNumber);
				DebugLogger.Log($"LOGGING: Player List: {ThirdRealmNetCore.PlayerList} | Object: {ThirdRealmNetCore.PlayerList[currentPlayer].TagObject as GameObject}");

				var player = ThirdRealmNetCore.PlayerList[currentPlayer].TagObject as GameObject;

				transform.SetPositionAndRotation(player.transform.position, player.transform.rotation);

				head.localEulerAngles = Vector3.zero;
			}

			// Keyboard
			if (Application.isFocused)
			{
				if (Keyboard.current.mKey.isPressed && !_isMicActive)
					_isMicActive = true;
				else if (!Keyboard.current.mKey.isPressed && _isMicActive)
					_isMicActive = false;
			}
		}

		private void ProcessRotation()
		{
			_rotationVector = Mouse.current.delta.ReadValue();

			transform.Rotate(0f, _rotationVector.x * sensitivityX * Time.deltaTime, 0f);

			// Head
			_rotationY += _rotationVector.y * sensitivityY * Time.deltaTime;
			_rotationY = Mathf.Clamp(_rotationY, minimumY, maximumY);

			head.localEulerAngles = new Vector3(-_rotationY, head.localEulerAngles.y, 0f);
		}

		private void ProcessMovement()
		{
			if (Keyboard.current.wKey.isPressed || Keyboard.current.upArrowKey.isPressed)
				_forward = 1f;
			else
				_forward = 0f;

			if (Keyboard.current.sKey.isPressed || Keyboard.current.downArrowKey.isPressed)
				_forward = -1f;

			if (Keyboard.current.aKey.isPressed || Keyboard.current.leftArrowKey.isPressed)
				_rightward = -1f;
			else
				_rightward = 0f;

			if (Keyboard.current.dKey.isPressed || Keyboard.current.rightArrowKey.isPressed)
				_rightward = 1f;

			// Process movement
			transform.position += moveSpeed * Time.deltaTime * ((head.forward * _forward) + (head.right * _rightward)).normalized;
		}

		public void NextPlayer()
		{
			if (ThirdRealmNetCore.PlayerList.Count == 0)
				return;

			previousPlayer = currentPlayer;

			if (currentPlayer + 1 < ThirdRealmNetCore.PlayerList.Count)
				currentPlayer++;
			else
				currentPlayer = 0;

			_isLockedToPlayer = true;
		}

		public void PreviousPlayer()
		{
			if (ThirdRealmNetCore.PlayerList.Count == 0)
				return;

			previousPlayer = currentPlayer;

			if (currentPlayer - 1 < 0)
				currentPlayer = ThirdRealmNetCore.PlayerList.Count - 1;
			else
				currentPlayer--;

			_isLockedToPlayer = true;
		}
	}
}
