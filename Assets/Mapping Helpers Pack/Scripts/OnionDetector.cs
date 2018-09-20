using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace MappingHelpersPack {
	public class OnionDetector : MonoBehaviour {
		
		float t = 0;
		void LateUpdate () {

			t -= Time.deltaTime;
			if (t < 0) {
				t = 0.1f;
				Ray ray = Camera.main.ViewportPointToRay (new Vector3 (0.5f, 0.5f, 0f));
				// Ray ray = Camera.main.ScreenPointToRay(Camera.main.transform.forward);
				
				float radius = 0.05f;
				bool hitt = false;
				

				foreach (RaycastHit hit in Physics.SphereCastAll(ray,radius)) {
					// Debug.Log("hit;"+hit.collider.name);
					FlyingOnion fo = hit.collider.gameObject.GetComponent<FlyingOnion> ();
					DishOnion disho = hit.collider.gameObject.GetComponent<DishOnion>();
					if (disho){
						// Debug.Log("Showy");
						if (ItemPopup.instance){
							ItemPopup.instance.Show (disho.transform.position + Vector3.up*0.25f, "Destroy this! " + disho.DishesRemainingInfo[0].ToString() + " of  "+disho.DishesRemainingInfo[1].ToString() +" dishes remaining." );
						}
						break;
					}
					if (fo) {
						fo.CameraHovering (); // Let onion "know" it has been seen -- causes onion to move for 1-2 seconds
					} 
					
					DamageReceiver dr = hit.collider.gameObject.GetComponent<DamageReceiver> ();
					if (dr || fo || disho ){
						hitt = true;
						Crosshair.instance.SetState (Crosshair.State.Destructible);
					}	
					
				}
				if (!hitt) {
					Crosshair.instance.SetState(Crosshair.State.Nominal);
					
				}
			}

					
		}
	}

}