using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace MappingHelpersPack {
	public class DeactivateDrawCircle : MonoBehaviour {

		public void DeactivateIt(){
			CircleMaker sl = FindObjectOfType<CircleMaker>();
			if (sl){
				Destroy(sl.gameObject);
			}		
			CircleMakerParent smp = FindObjectOfType<CircleMakerParent>();
			if (smp){
				Destroy(smp.gameObject);
			}		
		}
	}

}
