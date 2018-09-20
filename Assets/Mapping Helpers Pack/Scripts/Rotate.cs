using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace MappingHelpersPack {
	public class Rotate : MonoBehaviour {


		public bool randomizeDir = false;
		public Vector3 dir = new Vector3(0,1,0);
		public float rotSpeed = 90;
		public Space space = Space.World;
		// Use this for initialization
		void Start () {
			if (randomizeDir){
				dir = Random.insideUnitSphere;
			}
		}
		
		// Update is called once per frame
		void Update () {
			transform.Rotate (dir * rotSpeed * Time.deltaTime, space);
		}
	}
}