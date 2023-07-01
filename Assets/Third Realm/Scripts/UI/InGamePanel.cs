using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

using TMPro;

using ThirdRealm.Networking;
using ThirdRealm.Utils;
using ThirdRealm.PCClient;
using ThirdRealm.PCClient.DeviceManager;

namespace ThirdRealm.UI
{
	public class InGamePanel : MonoBehaviour, IUIPanel
	{
		public GameObject infoPanel;
		public GameObject quitConfirmationPanel;

		public DeviceManager deviceManagerRef;

		public TextMeshProUGUI playerCountText;

		[SerializeField]
		private Button _confirmationButton;

		private string _panelName = string.Empty;

		[SerializeField]
		private TextMeshProUGUI _confirmationText;

		private bool _showInfoPanel = true;
		private bool _backToHomeClicked = false;
		private bool _quitClicked = false;
		private bool _deviceManagerKeysPressed = false;

		public string PanelName
		{
			get { return _panelName; }
			set { _panelName = value; }
		}

		private void Awake()
		{
			_panelName = "InGame Panel";
		}

		private void Update()
		{
			if (!_deviceManagerKeysPressed && (Keyboard.current.leftCtrlKey.isPressed && Keyboard.current.dKey.isPressed))
			{
				_deviceManagerKeysPressed = true;

				if (!deviceManagerRef.isActiveAndEnabled)
					deviceManagerRef.Show();
				else
					deviceManagerRef.Close();
			}
			else if (_deviceManagerKeysPressed && !(Keyboard.current.leftCtrlKey.isPressed && Keyboard.current.dKey.isPressed))
				_deviceManagerKeysPressed = false;
		}

		private void LateUpdate()
		{
			if (_showInfoPanel)
			{
				var newText = ThirdRealmNetCore.PlayerList.Count + "/" + (ThirdRealmNetCore.Instance.MAXPLAYERS - 1);

				playerCountText.text = newText;
			}
		}

		public void Show()
		{
			gameObject.SetActive(true);
		}

		public void Close()
		{
			gameObject.SetActive(false);
		}

		public void NextPlayerClicked() => PCMasterClient.Instance.NextPlayer();

		public void PreviousPlayerClicked() => PCMasterClient.Instance.PreviousPlayer();

		public void InfoButtonClicked()
		{
			infoPanel.SetActive(_showInfoPanel = !_showInfoPanel);
		}

		public void BackToHomeClicked()
		{
			if (_backToHomeClicked)
				return;

			_backToHomeClicked = true;

			var megaverseHomeProduct = ApplicationManager.Instance.megaverseHomeProduct;

			var appPath = ApplicationManager.Instance.GetAppPath(megaverseHomeProduct.executableName);

			ApplicationManager.Instance.StartLoadApplication(megaverseHomeProduct, appPath);
		}

		public void QuitApplicationClicked()
		{
			if (_quitClicked)
				return;

			_quitClicked = true;

			ThirdRealmNetCore.Instance.QuitApplication();
		}

		public void ToggleQuitConfirmation(bool isGoHome)
		{
			quitConfirmationPanel.SetActive(!quitConfirmationPanel.activeSelf);
			
			_confirmationButton.onClick.RemoveAllListeners();

			if (isGoHome)
			{
				_confirmationButton.onClick.AddListener(BackToHomeClicked);

				_confirmationText.text = "Back To Home\n\nAre You Sure?";
			}
			else
			{
				_confirmationButton.onClick.AddListener(QuitApplicationClicked);

				_confirmationText.text = "Exit The MegaVerse\n\nAre You Sure?";
			}
		}
	}
}
