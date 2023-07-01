using System.Collections;
using System.Collections.Generic;

using UnityEngine;

using BNG;

namespace ThirdRealm.GameMechanics
{
	public class NetworkedArrow : Arrow
	{
		protected override void OnCollisionEnter(Collision collision)
		{
			// Ignore parent collisions
			if (transform.parent != null && collision.transform == transform.parent)
				return;

			// Don't count collisions if being held
			if (grab != null && grab.BeingHeld)
				return;

			// Don't Count Triggers
			if (collision.collider.isTrigger)
				return;

			string colNameLower = collision.transform.name.ToLower();

			// Ignore other very close bows and arrows
			if (flightTime < 1 && (colNameLower.Contains("arrow") || colNameLower.Contains("bow")))
			{
				Physics.IgnoreCollision(collision.collider, ShaftCollider, true);
				return;
			}

			// ignore player collision if quick shot
			if (flightTime < 1 && collision.transform.name.ToLower().Contains("player"))
			{
				Physics.IgnoreCollision(collision.collider, ShaftCollider, true);
				return;
			}

			// Damage if possible
			float zVel = System.Math.Abs(transform.InverseTransformDirection(rb.velocity).z);
			bool doStick = true;
			
			if (zVel > 0.02f && !rb.isKinematic)
			{
				NetworkedDamageable d = collision.gameObject.GetComponent<NetworkedDamageable>();
				if (d)
					d.DealDamage(arrowDamage, collision.GetContact(0).point, collision.GetContact(0).normal, true);//, gameObject, collision.collider.gameObject);

				// Don't stick to dead objects
				if (d != null && d.Health <= 0)
					doStick = false;
			}

			// Check to stick to object
			if (!rb.isKinematic && Flying)
				if (zVel > 0.02f)
				{
					if (grab != null && grab.BeingHeld)
						grab.DropItem(false, false);
					
					if (doStick)
						tryStickArrow(collision);

					Flying = false;

					playSoundInterval(2.462f, 2.68f);
				}

			// Attach to collider
			void tryStickArrow(Collision collision)
			{
				Rigidbody colRigid = collision.collider.GetComponent<Rigidbody>();
				transform.parent = null; // Start out with arrow being in World space

				// If the collider is static then we don't need to do anything. Just stop it.
				if (collision.gameObject.isStatic)
				{
					rb.collisionDetectionMode = CollisionDetectionMode.Discrete;
					rb.isKinematic = true;
				}
				// Next try attaching to rigidbody via FixedJoint
				else if (colRigid != null && !colRigid.isKinematic)
				{
					FixedJoint joint = gameObject.AddComponent<FixedJoint>();
					joint.connectedBody = colRigid;
					joint.enableCollision = false;
					joint.breakForce = float.MaxValue;
					joint.breakTorque = float.MaxValue;
				}
				else if (colRigid != null && colRigid.isKinematic && collision.transform.localScale == Vector3.one)
				{
					transform.SetParent(collision.transform);
					rb.useGravity = false;
					rb.collisionDetectionMode = CollisionDetectionMode.Discrete;
					rb.isKinematic = true;
					rb.constraints = RigidbodyConstraints.FreezeAll;
					rb.WakeUp();
				}
				// Finally, try parenting or just setting the arrow to kinematic
				else
				{
					if (collision.transform.localScale == Vector3.one)
					{
						transform.SetParent(collision.transform);
						rb.constraints = RigidbodyConstraints.FreezeAll;
					}
					else
					{
						rb.collisionDetectionMode = CollisionDetectionMode.Discrete;
						rb.useGravity = false;
						rb.isKinematic = true;
					}
				}
			}

			void playSoundInterval(float fromSeconds, float toSeconds)
			{
				if (impactSound)
				{

					if (impactSound.isPlaying)
						impactSound.Stop();

					impactSound.time = fromSeconds;
					impactSound.pitch = Time.timeScale;
					impactSound.Play();
					impactSound.SetScheduledEndTime(AudioSettings.dspTime + (toSeconds - fromSeconds));
				}
			}
		}
	}
}
