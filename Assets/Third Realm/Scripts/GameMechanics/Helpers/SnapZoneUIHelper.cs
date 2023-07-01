using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;

using BNG;

namespace ThirdRealm.GameMechanics
{
	public class SnapZoneUIHelper : MonoBehaviour
	{
		[SerializeField]
		private SnapZone _snapZone;

		[SerializeField]
		private Image _image;

		[SerializeField]
		private List<Sprite> _images;

		private static bool s_isFirstSnap = true;

		[SerializeField]
		private GameObject _tooltipPopupObj;

		private void Awake()
		{
			_snapZone = GetComponent<SnapZone>();
		}

		public void OnSnap(Grabbable grabbable)
		{
			if (_tooltipPopupObj)
				if (s_isFirstSnap)
				{
					s_isFirstSnap = false;

					_tooltipPopupObj.SetActive(true);
				}

			_snapZone.HeldItem.gameObject.SetActive(false);

			var newColor = _image.color;

			newColor.a = 1.0f;
			
			_image.color = newColor;
		}

		public void OnUnSnap(Grabbable grabbable)
		{
			if (_tooltipPopupObj)
				Destroy(_tooltipPopupObj);

			_snapZone.HeldItem.gameObject.SetActive(true);

			var newColor = _image.color;

			newColor.a = 0.15f;

			_image.color = newColor;
		}
	}
}
