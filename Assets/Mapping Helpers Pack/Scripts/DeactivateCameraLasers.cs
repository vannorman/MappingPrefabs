using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace MappingHelpersPack {
	public class DeactivateCameraLasers : MonoBehaviour {

		public void DeactivateIt(){
			ShootLasersFromCamera sl = FindObjectOfType<ShootLasersFromCamera>();
			if (sl){
				Destroy(sl.gameObject);
			}		
		}
	}

}
