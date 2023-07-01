using System.Collections;
using System.Collections.Generic;

using UnityEngine;

namespace ThirdRealm.Utils
{
	[CreateAssetMenu(fileName = "NetworkSettings", menuName = "ThirdRealm/Settings/Network Settings", order = 1)]
	public class NetworkSettings : ScriptableObject
	{
		public string photonServer;
		public string megabrainServer;

		public int photonPort;
		public int megabrainPort;
	}
}
