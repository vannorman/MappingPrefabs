using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseLook : MonoBehaviour {

	public float sensitivityX = 0.2f;
	public float sensitivityY = 0.2f;	
	Vector2 lastMousePos = Vector2.zero;
	void Update () {
		Vector2 deltaP = (Vector2)Input.mousePosition - lastMousePos;
		transform.Rotate(Vector3.up * deltaP.x * sensitivityX);
		transform.Rotate(Vector3.right * deltaP.y * sensitivityY);
		lastMousePos = Input.mousePosition;
	}
}
