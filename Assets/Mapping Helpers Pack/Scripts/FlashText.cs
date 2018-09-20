using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
namespace MappingHelpersPack {
	public class FlashText : MonoBehaviour {

		public Text text;
		public Image wh;
		
		bool flashed = false;
		float lerpSpeed = 1;
		public void FlashMessage(Color color, string message, float fadeSpeed = 2){
			flashed = true;
			text.text = message;
			
			lerpSpeed = fadeSpeed;
			wh.color = color;
		}

		void Update(){
			if (flashed){
		
				// if (timer < 0){
				Color toColor = new Color(wh.color.r,wh.color.g,wh.color.b,0);
				wh.color = Color.Lerp(wh.color,toColor,Time.deltaTime * lerpSpeed);
				if (wh.color.a < 0.05f){
					wh.color = Color.clear;
					flashed = false;
				}

				// }
			}
		}
	}
}