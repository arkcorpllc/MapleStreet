using System.Collections;

using UnityEngine;

using BNG;

namespace ThirdRealm.GameMechanics
{
	public class NetworkedExplosive : MonoBehaviour
	{
		[Header("Explosion Settings")]
		[Tooltip("Objects within this radius will have damage and force applied to it")]
		public float ExplosionRadius = 5f;

		[Tooltip("Apply damage to an item if it has a Damageable component attached.")]
		public float ExplosionDamage = 0f;

		[Tooltip("If an object has a Rigidbody and is within ExplosionRadius, it will have this amount of ExplosionForce added to it")]
		public float ExplosionForce = 500f;

		[Tooltip("Add an UpwardsModifier to AddExplosionForce. Use this to make objects fly more up into the air, instead of just outwardly.")]
		public float ExplosiveUpwardsModifier = 3f;

		[Header("Shown for Debug : ")]
		public bool ShowExplosionRadius = false;

		private void OnDrawGizmosSelected()
		{
			// Draw a yellow sphere at the transform's position
			if (ShowExplosionRadius)
			{
				Gizmos.color = Color.yellow;
				Gizmos.DrawSphere(transform.position, ExplosionRadius);
			}
		}

		public virtual void DoExplosion()
		{
			StartCoroutine(explosionRoutine());
		}

		private IEnumerator explosionRoutine()
		{

			// Get all objects in explosion radius
			Collider[] colliders = Physics.OverlapSphere(transform.position, ExplosionRadius);

			// First Damage all of the items
			for (int x = 0; x < colliders.Length; x++)
			{
				Collider hit = colliders[x];

				// Apply Damage
				if (ExplosionDamage > 0)
				{
					NetworkedDamageable damageable = hit.GetComponent<NetworkedDamageable>();

					if (damageable)
						if (hit.GetComponent<NetworkedExplosive>() != null)
							// Add slight delay do damaging explosives so everything doesn't go off at once
							StartCoroutine(dealDelayedDamaged(damageable, 0.1f));
						else
							damageable.DealDamage(ExplosionDamage, hit.ClosestPoint(transform.position), transform.eulerAngles);
				}
			}


			// Wait a frame so physics can be applied after damaging the items
			yield return new WaitForFixedUpdate();
			colliders = Physics.OverlapSphere(transform.position, ExplosionRadius);

			// Then Add Physics Force
			for (int x = 0; x < colliders.Length; x++)
			{
				Collider hit = colliders[x];

				Rigidbody rb = hit.GetComponent<Rigidbody>();

				// Add physics force
				if (rb != null)
					rb.AddExplosionForce(ExplosionForce, transform.position, ExplosionRadius, ExplosiveUpwardsModifier);
			}

			yield return null;
		}

		private IEnumerator dealDelayedDamaged(NetworkedDamageable damageable, float delayTime)
		{
			yield return new WaitForSeconds(delayTime);

			damageable.DealDamage(ExplosionDamage);
		}
	}
}
