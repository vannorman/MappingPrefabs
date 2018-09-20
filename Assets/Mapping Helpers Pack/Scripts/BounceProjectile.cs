using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace MappingHelpersPack {

	public class BounceProjectile : MonoBehaviour {

		void OnCollisionEnter(Collision hit){
			DamageGiver dg = hit.collider.GetComponent<DamageGiver> ();
			if (dg)
				Destroy (dg);
		}

	}
}
