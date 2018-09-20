using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SmoothFollow : MonoBehaviour {

	public Transform target;
	public float followSpeed = 0.2f;
	// Update is called once per frame
	void Update () {
		transform.position = Vector3.Lerp(transform.position,target.position,followSpeed);
		transform.rotation = Quaternion.Lerp(transform.rotation,target.rotation,followSpeed);
	}
}
