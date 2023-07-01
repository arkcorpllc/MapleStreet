using System.Collections;
using System.Collections.Generic;

using UnityEngine;

namespace ThirdRealm.PCClient
{
	public class PCMasterClientNetHelper : MonoBehaviour
	{
		public GameObject[] playerObjects;

		private void Awake()
		{
			DontDestroyOnLoad(this);
		}

		public void AssignPlayerObjects()
		{
			foreach (var obj in playerObjects)
				obj.SetActive(false);
		}
	}
}
