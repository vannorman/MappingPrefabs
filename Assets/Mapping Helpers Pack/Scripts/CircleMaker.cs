using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
namespace MappingHelpersPack {
	public class CircleMaker : MonoBehaviour {
		ParticleSystem ps;
		RecordPosition rp;
		public AudioClip beginDrawingSound;
		public AudioClip successSound;
		public AudioClip didntFinishSound;
		public float emitThreshhold = 0.001f;
		public float trackThreshhold = 0.05f;
		public float returnToStartThreshhold = 0.1f; 
		public GameObject progress;
		public Text gpStart;
		public Text gpCurrent;
		public Text gpTotal;
		public Text avgDistText;
		public Text instructions;
		public GameObject distanceTraveledGroup;

		public Image fill;

		int distanceNeeded = 3;
		
		static int greenPointsNeeded = 50;
		static float avgDistanceRequired = 2;
		
		public FlashText ft;
		FeaturesVisualizer fv;

		class DrawingSession {
			
			public Vector3 startingPosition;
			public Vector3 finishedPosition;
			public int greenPointsAtStart = 0;
			public int greenPointsAcquired = 0;
			public float avgDistanceOfGreenPoints;
			public List<Vector3> trackedPosiitons; 
			public int attempts = 0;
			public float timer = 0;
			public float percentDistanceThreshoolMet {
				get {
					return Mathf.Min((avgDistanceOfGreenPoints / avgDistanceRequired),1);
				}
			}
			public float percentGreenPointsCollected {
				get {
					return Mathf.Min(((float)greenPointsAcquired / (float)greenPointsNeeded));
				}
			}
			public float progress {
				get {
					return percentGreenPointsCollected  * percentDistanceThreshoolMet;
				}
			}
			public bool progressComplete {
				get {
					return progress >= 1;
				}
			}
		}
		DrawingSession drawingSession;
		

		enum State {
			Ready, 
			Drawing,
			NotEnoughPoints, // User has already drawn here, but needs to draw more (progress incomplete)
			NeedToMove, // User has completed progress here and needs to find a new location
		}
		State state;

		
		public Text distanceTraveled;
		public Text distanceNeededText;

		void SetState(State newState){
			state = newState;
			distanceTraveledGroup.gameObject.SetActive(false);
			progress.SetActive(false);
			switch(newState){
				case State.Ready:
					break;
				case State.Drawing:
					progress.SetActive(true);
					break;
				case State.NotEnoughPoints:
					break;
				
				case State.NeedToMove: // drawing ended
					distanceTraveledGroup.gameObject.SetActive(true);
					break;
			}
		}

		// Use this for initialization
		void Start () {
			rp = this.gameObject.AddComponent<RecordPosition>();
			ps = this.gameObject.GetComponent<ParticleSystem>();
			fv = FindObjectOfType<FeaturesVisualizer>();
			
		}


		void OnEnable(){
			InitDrawingSession();
		}

		void InitDrawingSession(){

			ft.FlashMessage(Color.white,"Tap to begin drawing.");
			drawingSession = new DrawingSession();
			drawingSession.trackedPosiitons = new List<Vector3>();
			distanceNeededText.text = distanceNeeded.ToString("#.0");
			fill.fillAmount = 0;
			SetState(State.Ready);
			drawingSession.greenPointsAtStart = Utils2.PlaceNoteGreenPoints(0).Length;
			drawingSession.greenPointsAcquired = 0;
		}
		
		
		float ticker = 0;
		bool emitting = false;
		void Update () {
			
			// #if UNITY_EDITOR
			// if (Input.GetKey(KeyCode.D)){
			// 	if (emitting == false){

			// 		ft.FlashMessage(Color.white,"Draw a BIG circle!");
			// 		emitting = true;
			// 	}
			// } else if (emitting == true) {
			// 	ft.FlashMessage(Color.white,"Touch to draw.");
			// 	emitting = false;
			// }
			// #else
			// #endif

			switch(state){
				case State.Ready:
					if (Input.touchCount > 0) {
						GetComponent<AudioSource>().clip = beginDrawingSound;
						GetComponent<AudioSource>().Play();
						ft.FlashMessage(Color.white,"Draw a BIG circle!");
						SetState(State.Drawing);
					}
					#if UNITY_EDITOR
					if (Input.GetKey(KeyCode.D)){
						GetComponent<AudioSource>().clip = beginDrawingSound;
						GetComponent<AudioSource>().Play();
						ft.FlashMessage(Color.white,"Draw a BIG circle!");
						SetState(State.Drawing);
					}
					#endif
					break;
				case State.Drawing:
					drawingSession.timer += Time.deltaTime;
					EmitParticles();
					UpdatePointsAcquired();
					UpdateFill();

					if (drawingSession.timer > 7 && drawingSession.percentDistanceThreshoolMet < 0.7f){
						drawingSession.timer = 0;
						GetComponent<AudioSource>().clip = beginDrawingSound;
						GetComponent<AudioSource>().Play();
						ft.FlashMessage(Color.white,"Try backing up a few feet.");
					}
					
					#if UNITY_EDITOR
					if (!Input.GetKey(KeyCode.D) || drawingSession.progressComplete){
						EndDrawing();
					}
					#else 
					if (Input.touchCount == 0){
						EndDrawing();
					}
					#endif
					break;
				case State.NotEnoughPoints:
					break;
				
				case State.NeedToMove:
					CheckDistanceTraveled();
					
					break;
			}
		}

		void CheckDistanceTraveled(){
			float distTraveled = (drawingSession.finishedPosition - transform.position).magnitude;
			distanceTraveled.text = distTraveled.ToString("#.0");
			bool finishedTraveling = distTraveled > distanceNeeded;
			if (finishedTraveling){
				GetComponent<AudioSource>().clip = successSound;
				GetComponent<AudioSource>().Play();
				InitDrawingSession();
			}
		}

		void UpdatePointsAcquired(){
			
			
			

			#if UNITY_EDITOR
			drawingSession.greenPointsAcquired += 1;
			drawingSession.avgDistanceOfGreenPoints += 0.1f;
			#else

			Vector3[] greenPoints = Utils2.PlaceNoteGreenPoints(drawingSession.greenPointsAtStart);
			float totalDist = 0;
			foreach(Vector3 p in greenPoints){
				totalDist += (transform.position - p).magnitude;
			}
			float avgDist = totalDist / (float)greenPoints.Length;
			avgDistText.text = "avg dist: "+avgDist.ToString("#.00");
			drawingSession.avgDistanceOfGreenPoints = avgDist;	
			drawingSession.greenPointsAcquired = greenPoints.Length;
			
			gpCurrent.text = greenPoints.Length.ToString();
			gpTotal.text = Utils2.PlaceNoteGreenPoints(0).Length.ToString();
			gpStart.text = drawingSession.greenPointsAtStart.ToString();

			#endif

			fill.fillAmount = Mathf.Max(fill.fillAmount,drawingSession.progress);
			// Debug
			
		}

		void EmitParticles(){
			float dm = (rp.nowPosition-rp.lastPosition).magnitude;
			if (dm > emitThreshhold) {
				ps.Emit(1);
			}
			if (dm > trackThreshhold){
				drawingSession.trackedPosiitons.Add(transform.position);
			}
		}

		void UpdateFill(){
			
			
			
		}
		



		void EndDrawing(){
			
			if (drawingSession.progressComplete){
				SuccessfulDrawCompleted();
			} else {
				// Did they acquire enough green points here?
				drawingSession.attempts ++;
				int maxAttempts = 5;
				if (drawingSession.attempts > maxAttempts){
					ft.FlashMessage(Color.white,"Hm .. move "+distanceNeeded.ToString()+" meters and try again.");
					SetState(State.NeedToMove);
				} else {
					GetComponent<AudioSource>().clip = didntFinishSound;
					GetComponent<AudioSource>().Play();
					ft.FlashMessage(Color.white,"Keep going! Draw more circles.");
					SetState(State.Ready);
				}
				
			}

		}

		void SuccessfulDrawCompleted(){
			drawingSession.finishedPosition = transform.position;
			ft.FlashMessage(Color.white,"Great! Now move "+distanceNeeded.ToString()+" meters away.");
			SetState(State.NeedToMove);
			GetComponent<AudioSource>().clip = successSound;
			GetComponent<AudioSource>().Play();
		}
	}
}