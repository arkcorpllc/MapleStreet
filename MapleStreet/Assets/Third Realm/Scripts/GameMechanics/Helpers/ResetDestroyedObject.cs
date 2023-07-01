using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace _3rdRealmCreations
{
	public class ResetDestroyedObject : MonoBehaviour
	{
		public Rigidbody rigid_body;

		private void Awake()
		{
			if (rigid_body == null)
				rigid_body = GetComponent<Rigidbody>();

			if (rigid_body == null)
				Debug.LogError("Rigidbody not found! Please assign a reference to one or add one to this game object!");
		}

		private void OnDisable()
		{
			rigid_body.velocity = Vector3.zero;
			rigid_body.angularVelocity = Vector3.zero;

			transform.localPosition = Vector3.zero;
			transform.localRotation = Quaternion.identity;
		}
	}
}
