using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
namespace MappingHelpersPack {
	public class DishOnion : MonoBehaviour {

		// appears randomly spread out throughout the scene on start
		// float around until player gets "near" to one, then it floats to the nearest "surface" until brown  dots > 50
		// now ready to be "unrwapped"
		// player grabs one of the tendrils "grab" ui
		// player moves phone in correct direction dragging the UI radial fill around, which starts as gray and slowly fades to green as the sweep is completed.
		// hatpics doot doot as you drag
		// After a sweep is completed, some success sounds, particles, another tendril pops out, maybe 3 total will pop
		// after 3rd tendril drag is completed, the onion plants!



		public TextMesh debugText ;
		public enum State {
			Active,
			Finished
		}

		public State state;
		
		public DishGroup dishGroup;



	//	public Tendril tendril; // the initial tendril is "deactivated" and will serve as a prefab for additional tendrils
	//	List<Tendril> tendrils = new List<Tendril>();
		Vector3 startPos;
		public bool stateOnStart = false;
		void Start(){
			bool foundPlane = false;
			List<PlacenotePlaneMeshRender> planes = new List<PlacenotePlaneMeshRender>();
			foreach(PlacenotePlaneMeshRender plane in FindObjectsOfType<PlacenotePlaneMeshRender>()){
				if (Utils2.DeterminePlaneType(plane) == Utils2.PlaneType.Horizontal) {
					foundPlane = true;
					planes.Add(plane);
					

				}

			}


					

			if (foundPlane){
				Vector3 p = planes[Random.Range(0,planes.Count)].transform.position;
				transform.position = p + Vector3.up * Mathf.Max(0.4f,Camera.main.transform.position.y - p.y); // place one meter above the first horizontal plane detected
			} else {
				Debug.LogError("No planes found! Placing dish in front of camera.");
				transform.position = Camera.main.transform.position + Camera.main.transform.forward * 1f;
			}

			if (stateOnStart) {
				SetState (state);
			}

			
		}

		public void SetState(State newState){
			state = newState;
			
			
			switch(state){
			case State.Active:
				// starting state
				break;
			case State.Finished: 
			
				// completed
				// ToastManager.ShowToast("You destroyed the mapping-assist dish group!",3.0f);
				Destroy(this.gameObject);
				
				break;
			default:
				break;
			}

		}

		

		int startingDishCount = 6; // should count this at startup in case we change?
		public int[] DishesRemainingInfo {
			get { 
				return new int[]{ dishGroup.dishesParent.childCount, startingDishCount };
			}
		}

		public void OnDishGroupDestroyed(){
			SetState(State.Finished);
		}




	}

}