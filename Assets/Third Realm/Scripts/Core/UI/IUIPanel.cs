using UnityEngine;

namespace ThirdRealm.UI
{
	public interface IUIPanel
	{
		public string PanelName { get; set; }

		public void Show();
		public void Close();
	}
}
