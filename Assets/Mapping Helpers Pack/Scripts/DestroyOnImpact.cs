using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace MappingHelpersPack {
	public class DestroyOnImpact : MonoBehaviour {

		public bool ignoreBounceProjectile = true;

		void OnCollisionEnter(Collision hit){

			
			Destroy (this.gameObject);
			
		}
	}
}