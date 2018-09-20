using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
namespace MappingHelpersPack {
	public class FlyingOnion : MonoBehaviour {

		// appears randomly spread out throughout the scene on start
		// float around until player gets "near" to one, then it floats to the nearest "surface" until brown  dots > 50
		// now ready to be "unrwapped"
		// player grabs one of the tendrils "grab" ui
		// player moves phone in correct direction dragging the UI radial fill around, which starts as gray and slowly fades to green as the sweep is completed.
		// hatpics doot doot as you drag
		// After a sweep is completed, some success sounds, particles, another tendril pops out, maybe 3 total will pop
		// after 3rd tendril drag is completed, the onion plants!


		Vector3 startPos;
		public bool stateOnStart = false;
		void Start(){
			transform.position = startPos = Camera.main.transform.position;
			// startPos = transform.position;
			
			// #if UNITY_EDITOR
			// brownianRadius = 0.03f;
			// timeToSeekPoints = 0.5f;
			// autoAdvanceTimer = 0.5f;
			// #endif
			InitBrownianPoints ();

			

			
		}


		float cameraHoverTimer = 0f;
		float cameraHoverThreshhold  = 1.5f; // after this passed, tendril will lock out and allow rotation.
		bool cameraHovering = true; // for initializeation of camhovercountdown in update if camhovering false
		public void CameraHovering(){
	//		Debug.Log ("camhov:" + cameraHoverTimer);
			cameraHoverTimer = 1.2f;
		}


		float camHoverCountdown = 0;
		Quaternion targetRot;

		



		Vector3 targetPos;

		enum MovementState {
			Brownian,
			SeekPoints,
			AwaitingDestruction,
			DestroyedAndFalling,
			Stationary
		}
		float movementTime = 0f;
		MovementState movementState = MovementState.Brownian;


		void SetTarget(Vector3 t){
			// don't let target be near to camera.
			Vector3 dirToCam = Camera.main.transform.position - t;
			if (dirToCam.magnitude < .5f) {
				targetPos = t - dirToCam * (dirToCam.magnitude - 0.5f);
			} else {
				targetPos = t;
			}
		}

		void SeekPointClusters() {
			if (OnionLocationHelper.instance.FoundTargetNearOnion (GetComponent<FlyingOnion>())) {
				SetTarget(OnionLocationHelper.instance.TargetFeatureCluster ());
				// debugText.text = "t:" + targetPos;
				float moveSpeed = 1.5f;
				MoveTowardsTarget ();
			} else {
				// debugText.text = "t: random";

				MoveRandomly ();
			}
		}

		void MoveTowardsTarget(float moveSpeed = 1f){
			Vector3 dirToTarget = (targetPos - transform.position).normalized;
			movementDir = Vector3.Lerp (movementDir, dirToTarget, Time.deltaTime); // smoothing
			transform.position += movementDir * Time.deltaTime;
	//		transform.position = Vector3.MoveTowards (transform.position, targetPos, Time.deltaTime * moveSpeed);
		}

		public Transform panelsParent;
		bool AllPanelsDestroyed {
			get {
				if (panelsParent.childCount < 35) {
					foreach (Transform t in panelsParent.transform) {
						Destroy (t.gameObject);
					}
				}
				return panelsParent.childCount == 0;
			}
		}


		public GameObject smokeTrail;
		void SetMovementState(MovementState newState){
	//		Debug.Log ("<color=red><b> move state;</b></color>" + newState);
			movementState = newState;
			switch (newState) {
			case MovementState.DestroyedAndFalling:
				smokeTrail.SetActive (true);
				break;
			case MovementState.Stationary:
				smokeTrail.SetActive (false);
				// Finished
				Finished();
				break;	
			}
		}

		void Finished(){
			// Player successfully finished the "killing" of this object
			Destroy(this.gameObject);
			// ToastManager.ShowToast("Flying Onion style mapping complete!",2.0f);
		}

		#if UNITY_EDITOR
		float brownianRadius = 0.1f;
		#else
		float brownianRadius = 2.3f;
		#endif
		float timeToSeekPoints = 10f;
		int brownianIndex = 0;
		List<Vector3> brownianPoints = new List<Vector3>();
		void InitBrownianPoints(){
			brownianPoints.Add (startPos + Vector3.right * brownianRadius);
			brownianPoints.Add (startPos - Vector3.right * brownianRadius);
			brownianPoints.Add (startPos + Vector3.forward * brownianRadius);
			brownianPoints.Add (startPos - Vector3.forward * brownianRadius);
			string s = "";
			foreach (Vector3 p in brownianPoints) {
				s += p + ", ";
			}
		}



		bool NearToTarget {
			
			get {
				return (transform.position - targetPos).magnitude < .05f;
			}
		}


		bool NearToPoint (Vector3 p){
			return Vector3.Magnitude (transform.position - p) < 0.1f;
		}

		float autoAdvanceTimer = 4f; // finished mapping but player didn't destroy it!! so auto destroy after time.
		bool BrownianComplete = false;
		void MoveBrownian(){
			SetTarget (brownianPoints [brownianIndex]);
			MoveTowardsTarget ();
			if (NearToPoint(brownianPoints [brownianIndex])) {
				if (brownianIndex < brownianPoints.Count - 1) {
					brownianIndex++;
				} else {
					BrownianComplete = true;
				}
			}
		}



		// Update is called once per frame
		void Update () {
			#if UNITY_EDITOR
			if (Input.GetKey (KeyCode.L)) {
				CameraHovering ();
			}
			
			#endif

			cameraHoverTimer -= Time.deltaTime;
			if (cameraHoverTimer > 0) {
				cameraHovering = true; 
			} else {
				cameraHovering = false;
			}
			float fillSpeed = 0.2f;
			float rotSpeed = 2f;



			if (cameraHovering) {
				movementTime += Time.deltaTime;
			}
			switch (movementState) {
			
			case MovementState.Brownian:
				
				if (cameraHovering) {
					MoveBrownian ();
				}
				if (BrownianComplete) {
					SetMovementState (MovementState.SeekPoints);
					movementTime = 0;	
				}
				break;
			case MovementState.SeekPoints:
				if (cameraHovering)
					SeekPointClusters ();
				if (movementTime > timeToSeekPoints) {
					SetMovementState (MovementState.AwaitingDestruction);
					movementTime = 0;
				}
				if (AllPanelsDestroyed) {
					SetMovementState (MovementState.DestroyedAndFalling);
				}
				break;
			case MovementState.AwaitingDestruction:
//				Debug.Log ("await dest");
				if (AllPanelsDestroyed) {
					SetMovementState (MovementState.DestroyedAndFalling);
				} else {
					MoveRandomly (0.1f);
					autoAdvanceTimer -= Time.deltaTime;
					if (autoAdvanceTimer < 0) {
						autoAdvanceTimer = 10;
						SetMovementState (MovementState.DestroyedAndFalling);
					}
				}
				break;
			case MovementState.DestroyedAndFalling:
				GetPlaneWithHighestPointScore ();
				MoveTowardsTarget ();
				if (NearToTarget) {
					SetMovementState (MovementState.Stationary);
				}
				autoAdvanceTimer -= Time.deltaTime;
				if (autoAdvanceTimer <0){
					SetMovementState(MovementState.Stationary);
				}
				break;
			case MovementState.Stationary:
				// finished?
				break;
			default:
				break;
			}
			
			
				
				

		}

		public ParticleSystem coins;
		public void CoinFx(){
			coins.Emit (1);
		}
		float mineTimer = 0f;


		void GetPlaneWithHighestPointScore(){
		
			GameObject nearest = OnionLocationHelper.instance.GetNearestPlane (this.transform, 1.5f);
			if (nearest) {
				PlacenotePlaneMeshRender pi = nearest.GetComponent<PlacenotePlaneMeshRender> ();
				if (pi) {
					SetTarget (Utils2.GetPlaneCenter(pi));
				} else {
					// it was a fake!
					SetTarget(nearest.transform.position);
				}
			}
			else {
				Debug.LogError ("no nearest!");
			}
		}




		Vector3 GetRandomPos {

			get {
				float randomRadius = 1.2f;
				Vector3 rp = Vector3.zero;
				for (int i = 0; i < 20; i++) {
					rp = startPos + Random.insideUnitSphere * randomRadius;
					if (Vector3.Magnitude (startPos - Camera.main.transform.position) > .35f) {
						return rp;
					}
				}
				return rp;
			}
		}

		float lastRandomDirectionTime = 0;
		Vector3 randomDir = Vector3.right;
		Vector3 movementDir = Vector3.zero;
		Vector3 randomPos = Vector3.zero;
		void MoveRandomly(float randomMovementSpeed = 1f){
			float randomDirectionInterval = 3f;
			if (Time.time - lastRandomDirectionTime > randomDirectionInterval) {
				lastRandomDirectionTime = Time.time;
				randomPos = GetRandomPos; 
			}
			SetTarget (startPos + randomPos);


			MoveTowardsTarget ();
		}

		
	}

}