using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
namespace MappingHelpersPack {
	public class OnionLocationHelper : MonoBehaviour {

		public static OnionLocationHelper inst;
		public static OnionLocationHelper instance {
			get {
				if (inst == null) {
					inst = UnityEngine.GameObject.FindObjectOfType<OnionLocationHelper>();
				}
				return inst;
			}
		}
		// Use this for initialization
		void Start () {
	//		InitQuadrantScores ();	
		}
		
		// Update is called once per frame
		void Update () {
			targetFeatureClusterTimer -= Time.deltaTime;
			if (Input.GetKey (KeyCode.C)) {
				for (int i = 0; i < 100; i++) {
				
					GameObject o = GameObject.Find ("debSphere");
					if (o) {
						Destroy (o);
					}
				}
			}
		}






		Dictionary<Vector3,float> QuadrantScores = new Dictionary<Vector3,float>();
	//	void InitQuadrantScores(){
	//		QuadrantScores.Clear ();
	//		for (int i=-1;i<2;i++){
	//			for (int j = -1; j < 2; j++) {
	//				for (int k = -1; k < 2; k++) {
	////					Debug.Log ("ijk:" + i + "," + j + "," + k);
	//					QuadrantScores.Add (new Vector3 (i, j, k), 0);
	//				}
	//			}
	//		}
	//
	//	}

		float targetFeatureClusterInterval = 1f;
		float targetFeatureClusterTimer = 0f;
		Vector3 cachedTarget;
		public bool foundAnyQuadrant = false;
		public Vector3 TargetFeatureCluster (){
			return cachedTarget;
		}
		public float searchRadius = 8f;
		FlyingOnion lastOnionWhoRequested;
		public bool FoundTargetNearOnion(FlyingOnion mo) {
			if (targetFeatureClusterTimer < 0) {
				foundAnyQuadrant = false;
				if (lastOnionWhoRequested != mo) {
					searchRadius = 8f;
				}
				lastOnionWhoRequested = mo;
				targetFeatureClusterTimer = targetFeatureClusterInterval;
	//			InitQuadrantScores ();
				QuadrantScores.Clear();
				// Let's make 27 quadrants relative to onion's world position
				// Check each quadrant for total green features
				// The quadrant with the most green features is where the onion moves.
				
				// iterate through all Green map points
				
				#if !UNITY_EDITOR
				Vector3[] greenPoints = Utils2.PlaceNoteGreenPoints(0);
				#else 
				Vector3[] greenPoints = GenerateFakeGreenPointsForEditor();
				#endif
				Debug.Log("Greenpoints:"+greenPoints);

				
				foreach (Vector3 gp in greenPoints) {
					for (int i=-1;i<2;i++){
						for (int j = -1; j < 2; j++) {
							for (int k = -1; k < 2; k++) {
								// For each point compare its distance to one of 27 quadrants surrounding the onion
								// Closer quadrants are scored more highly
								// Result should be that the quadrant with the most green dots gets the highest score.
								float distFromThisQuadrantToGreenPoint = Vector3.SqrMagnitude (mo.transform.position + new Vector3 (i, j, k) * searchRadius - gp);
								Vector3 key = new Vector3 (i, j, k);
								float val = Mathf.Min (1, 1 / distFromThisQuadrantToGreenPoint);
								// Debug.Log ("val for " + i + "," + j + "," + k + ": " + val);
								// if (QuadrantScores.ContainsKey (key)) {
								// 	QuadrantScores [key] += val; // never more than 1
								// } else {
								// 	QuadrantScores.Add (key, val);
								// }
							}
						}
					}
				}
				
				
	//			float max = 0;
				Vector3 bestQuadrant = GetBestQuadrant ();

				if (foundAnyQuadrant) {
					Debug.Log ("set cached target;" + mo.transform.position + " plus <color=green>" + bestQuadrant + "</color>");
					cachedTarget = mo.transform.position + bestQuadrant;
					// If the best quadrant is zero, shrink the radius
					if (bestQuadrant == Vector3.zero) {
						searchRadius /= 2f;
						Debug.Log("<color=blue>Decereased by half. New radius:"+searchRadius+"</color>");
					}

				} else {
					Debug.Log ("Found no quads");
				}
				Debug.Log("<color=blue>Cached :"+cachedTarget+"</color>");
				
			}
			return foundAnyQuadrant;


		}


		Vector3 GetBestQuadrant(){
			float max = 0;
			Vector3 bestQuadrant = Vector3.zero;
			foreach (KeyValuePair<Vector3,float> kvp in QuadrantScores) {
				// Determine the highest scored quadrant
				if (kvp.Value > max) {
					//					Debug.Log ("val of " + kvp.Key + ":" + kvp.Value+" vs <color=red>max:</color>"+max);
					max = kvp.Value;
					bestQuadrant = kvp.Key;
					foundAnyQuadrant = true;
				}	
			}
			return bestQuadrant;
		}

		Vector3[] cachedEditorPoints = new Vector3[0];
		Vector3[] GenerateFakeGreenPointsForEditor(){
			if (cachedEditorPoints.Length > 0) {
				return cachedEditorPoints;
			} 
			Vector3[] ret = new Vector3[300];
			for (int i=0;i<300;i++){
				ret[i] = Camera.main.transform.position + Random.insideUnitSphere * 3f;
				GameObject dot = GameObject.CreatePrimitive(PrimitiveType.Cube);
				dot.transform.localScale *= .1f;
				dot.transform.position = ret[i];
				dot.GetComponent<Renderer>().material.color = Color.green;	
			}
			cachedEditorPoints = ret;
			return ret;
		}



		float planeSeekTimer = 0f;
		float nearestPlaneSeekInterval = 0.3f;

		public GameObject GetNearestPlane(Transform nearObj, float r){

			PlacenotePlaneMeshRender[] planes = FindObjectsOfType<PlacenotePlaneMeshRender> ();
			Dictionary<PlacenotePlaneMeshRender,float> scoredPlanes = new Dictionary<PlacenotePlaneMeshRender, float> ();
			for (int i = 0; i < planes.Length; i++) {
				float score = 0;
				Vector3[] pts = Utils2.PlaceNoteGreenPoints();

				for (int j = 0; j < pts.Length; j++) {
					Vector3 meshCenter = Utils2.GetPlaneCenter(planes[i]); //planes[i].GetPlaneCenter ();
					score += Mathf.Min (1, 1 / (pts [j] - meshCenter).magnitude);
				}
				scoredPlanes.Add (planes [i], score);
			}
			PlacenotePlaneMeshRender[] maxArr = (from x in scoredPlanes where x.Value == scoredPlanes.Max(v => v.Value) select x.Key).ToArray();

			if (maxArr.Length == 0) {
				// in case no planes are found, just return the center of the previously discovered "best" quadrant.
				GameObject fake = new GameObject ();
				fake.transform.position = cachedTarget; // nearObj.transform.position + GetBestQuadrant ();
				return fake;
			} else {
				return maxArr[0].gameObject;
			}


		}


	}
}