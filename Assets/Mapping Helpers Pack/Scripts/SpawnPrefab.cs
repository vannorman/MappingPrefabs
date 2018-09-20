using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPrefab : MonoBehaviour {

	public GameObject prefabToSpawn;
	public void SpawnNow(){
		GameObject p = (GameObject)Instantiate(prefabToSpawn);
	}
}
