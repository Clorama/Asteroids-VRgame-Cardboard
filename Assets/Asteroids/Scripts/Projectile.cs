using UnityEngine;
using System.Collections;

public class Projectile : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		transform.position += transform.forward * Time.deltaTime * 50.0f;

		if (transform.position.x >= 148f) {
			transform.position = new Vector3(-148f, 0f,transform.position.z);
		}else if (transform.position.x <= -148f) {
			transform.position = new Vector3(148f, 0f,transform.position.z);
		}else if (transform.position.z >= 148f) {
			transform.position = new Vector3(transform.position.x, 0f,-148f);
		}else if (transform.position.z <= -148f) {
			transform.position = new Vector3(transform.position.x, 0f,148f);
		}
	}

	private IEnumerator DestroySelf() {
		yield return new WaitForSeconds (2.5f);
			Destroy (gameObject);
}
}
