using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetCameraAsParent : MonoBehaviour {

	// Use this for initialization
	void LateUpdate () {	
		// transform.SetParent(Camera.main.transform);
		transform.position = Camera.main.transform.position;
		transform.rotation = Camera.main.transform.rotation;;
	}
	

}
