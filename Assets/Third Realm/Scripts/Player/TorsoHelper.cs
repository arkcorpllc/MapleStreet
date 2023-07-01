using System.Collections;
using System.Collections.Generic;

using UnityEngine;

namespace _3rdRealmCreations
{
	public class TorsoHelper : MonoBehaviour
	{
		public Transform head;

		public Vector3 offset = Vector3.zero;

		private void Start()
		{
			if (!head)
				head = transform.parent;
		}

		private void Update()
		{
			var headEuler = head.rotation.eulerAngles;
			transform.position = head.position - (new Vector3(0f, offset.y, 0f) + head.forward * offset.z);
		}

		private void LateUpdate()
		{
			var headEuler = head.rotation.eulerAngles;

			transform.eulerAngles = new Vector3(headEuler.x * 0f, headEuler.y, headEuler.z * 0f);
		}
	}
}
