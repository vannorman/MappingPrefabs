using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
namespace MappingHelpersPack {
	public class ItemPopup : MonoBehaviour {


		// Notes:
		// Screen space goes from 0 - width, 0 -height, 0,0 from bottom left
		// canvas space goes from -width/2 to width/2, -height/2 to height/2, with bottom left being -w/2 , -h/2
		// Convert from screen to canvas
		void Start(){
			Initialize ();
			Hide ();
		}
		public static ItemPopup inst;
		public static ItemPopup instance {
			get {
				if (inst == null){
					inst = FindObjectOfType<ItemPopup>();
				}
				return inst;
			}
		}
		public void Initialize(){
			inst = this;
		}

		public Image fromTopRight;
		public Image fromTopLeft;
		public RectTransform group;

		Vector3 worldHitPos;
		Vector3 screenPoint {
			get {
				Vector3 v = Camera.main.WorldToScreenPoint (worldHitPos);
	//			Debug.Log ("V:" + v);
				return v; //Camera.main.WorldToScreenPoint (worldHitPos);
			}
		}

		public Text infoText;
		Vector2 anchoredPosition;
		Vector2 offset = Vector2.zero; // Which direction (quadrant) will the popup be shown from the click?
		public void Show(Vector3 p, string text){
			timeout = 5f;
			infoText.text = text;
			group.gameObject.SetActive (true);
			worldHitPos = p;
			SetPopupPosition (); // make sure posiiton is set this frame.
			SetOffsetPosition();
		}


		float timeout = 0f;
		float offsetTimeout = 0f;
		void LateUpdate() {
			SetPopupPosition ();
			timeout -= Time.deltaTime;
			offsetTimeout -= Time.deltaTime;
			if (timeout < 0) {
				Hide ();
			} else {
				Utils2.FadeAllMaterialsAndUI(group,1,3);
			}
		}

		Vector2 anchoredPositionFromScreenPoint {
			get {

				return new Vector2(screenPoint.x - Screen.width /2, -Screen.height/2 + screenPoint.y); // new Vector2((screenPoint.x - Screen.width/2f)/2f,(-screenPoint.z - Screen.height/2f)/2f);
			}
		}


		void SetPopupPosition() {		
			// Update the position of the popup every frame, in case camera was moving, so that the popup stays centered on the item.
			GetComponent<RectTransform> ().anchoredPosition = anchoredPositionFromScreenPoint;

		}

		public int ow = 100;
		public int oh = 100;
		void SetOffsetPosition(){
			
			if (offsetTimeout > 0) {
				return;
			}
			offsetTimeout = 1f; // prevent rapid switching.
			Vector2 mp = anchoredPositionFromScreenPoint;
			fromTopRight.gameObject.SetActive(false);
			fromTopLeft.gameObject.SetActive(false);
			// fromBottomLeft.gameObject.SetActive(false);
			// fromBottomRight.gameObject.SetActive(false);

			

			if (mp.x > 0) {
				fromTopLeft.gameObject.SetActive (true);
				offset = new Vector2 (ow, oh);
			} else {
				fromTopRight.gameObject.SetActive (true);
				offset = new Vector2 (-ow, oh);
			}

			group.anchoredPosition = offset; // + anchoredPositionFromScreenPoint;
			
		}


		public void Hide(){
			if (group.gameObject.activeSelf && Utils2.FadeAllMaterialsAndUI(group,0,3)){
				group.gameObject.SetActive (false);	

			}
		}

	}

}