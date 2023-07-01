using System.Collections;
using System.Collections.Generic;

using UnityEngine;

namespace ThirdRealm.Products
{
#if !THIRD_REALM_EXPERIENCE
	[CreateAssetMenu(fileName = "Product", menuName = "ThirdRealm/Products/Product", order = 1)]
#endif // !THIRD_REALM_EXPERIENCE
	public class Product : ScriptableObject
	{
		public string productName;
		public string executableName;
		public string packageName;
		public string version;
		public string description;

		public int minNumPlayers;
		public int maxNumPlayers;

		public Sprite logoImage;
	}
}
