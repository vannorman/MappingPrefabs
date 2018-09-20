using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace MappingHelpersPack {
	public class ShootLasersFromCamera : MonoBehaviour {

		public Transform[] cannons;
		public GameObject laserPrefab;
		float fireTime = 0;
		float fireInterval =.1f;
		public float laserForce = 600;

		void Start() {

			Transform leftCannon = new GameObject("left cannon").transform;
			leftCannon.transform.SetParent(Camera.main.transform);
			leftCannon.transform.position = Camera.main.ViewportToWorldPoint(new Vector3(1,0,Camera.main.nearClipPlane)); 
			leftCannon.transform.localPosition += new Vector3(0.01f,-0.01f,0); 

			
			Transform rightCannon = new GameObject("right cannon cannon").transform;
			rightCannon.transform.SetParent(Camera.main.transform);
			rightCannon.transform.position = Camera.main.ViewportToWorldPoint(new Vector3(0,0,Camera.main.nearClipPlane)); 
			rightCannon.transform.localPosition += new Vector3(-0.01f,-0.01f,0);

			cannons = new Transform[]{ leftCannon, rightCannon };
			// Vector3[] frustumCorners = new Vector3[4];
			// Camera.main.CalculateFrustumCorners(new Rect(0, 0, 1, 1), Camera.main.nearClipPlane, Camera.MonoOrStereoscopicEye.Mono, frustumCorners);
			
			
			// leftCannon.transform.position = frustumCorners[0]; // Camera.main.ViewportToWorldPoint (new Vector3 (1,-1,Camera.main.nearClipPlane));
		}

		void LateUpdate(){
			fireTime -= Time.deltaTime;
			if (Input.GetMouseButton(0) || Input.touchCount > 0){
				if (fireTime < 0) {
					fireTime = fireInterval;
					foreach(Transform t in cannons){
						GameObject laser = (GameObject)Instantiate (laserPrefab, t.position, Camera.main.transform.rotation);
						// laser.transform.parent = transform;
					}
				}

			}
		}
	}
}