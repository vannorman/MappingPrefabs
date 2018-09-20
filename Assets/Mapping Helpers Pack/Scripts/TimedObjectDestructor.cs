
using UnityEngine;
using System.Collections;
namespace MappingHelpersPack {
	public class TimedObjectDestructor : MonoBehaviour
	{


		public bool autoDestruct = false;
		public bool randomize = false;
		public float fuseTime = 2f;

		void Start(){
			if (randomize){
				fuseTime = Random.Range(fuseTime /2f, fuseTime*1.5f);
			}
			if (autoDestruct)
				DestroyNow (fuseTime);
		}
		public void DestroyNow(float s)
		{
			Invoke("DestroyNow", s);

		}
		private void DestroyNow(){

			Destroy(gameObject);
		}
	}

}