using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace ThirdRealm.UI
{
	using PCClient;
	using Products;

	public class UIManager_PC : MonoBehaviour
	{
		private static UIManager_PC s_instance;

		public InGamePanel inGamePanel;

		public Image cancelSign;

		private bool _prevEscPressed = false;

		#region PROPERTIES

		public static UIManager_PC Instance
		{
			get
			{
				if (s_instance == null)
					s_instance = FindObjectOfType<UIManager_PC>();

				return s_instance;
			}
		}

		#endregion // PROPERIES \\

		#region UNITY CALLBACKS

		private void Awake()
		{
			s_instance = this;
		}

		private void Update()
		{
			cancelSign.enabled = !PCMasterClient.Instance.GetMicState;

			if (Keyboard.current.escapeKey.isPressed)
			{
				if (!_prevEscPressed)
					inGamePanel.ToggleQuitConfirmation(false);

				_prevEscPressed = true;
			}
			else
				_prevEscPressed = false;
		}

		#endregion // UNITY CALLBACKS \\

		public void ShowPanel(GameObject obj)
		{
			var panel = obj.GetComponent<IUIPanel>();

			if (panel != null)
				panel.Show();
		}

		public void OnCloseClicked(GameObject obj)
		{
			var panel = obj.GetComponent<IUIPanel>();

			if (panel != null)
				panel.Close();
		}
	}
}
