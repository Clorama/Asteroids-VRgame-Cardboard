using UnityEngine;
using System.Collections;

[RequireComponent (typeof(Collider))]

public class Asteroid : MonoBehaviour, IGvrGazeResponder {

	private Player player;

	// Use this for initialization
	void Start () {
		player = GameObject.Find("GvrMain").GetComponent<Player>();
	     Debug.Log ("got player component"); 
			
		//face a random direction
		float y = Random.Range(0f,360f);
		transform.rotation = Quaternion.Euler (0f, y, 0f);
	
	}
	
	// Update is called once per frame
	void Update () {
		//continuously move in forward direction 

		transform.position += transform.forward * Time.deltaTime * 15.0f;

		//if it's x or z values are greater or less than set values, reset location
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

	void OnCollisionEnter(Collision collision) {
		if (collision.gameObject.tag == "Projectile") {
			Destroy (collision.gameObject);
			if (transform.localScale.x >= 18f) {
				for (int i = 0; i < 2; i++) {
					GameObject NewAst = (GameObject)Instantiate (gameObject, new Vector3(transform.position.x + (float)i,transform.position.y,transform.position.z), transform.rotation);
					NewAst.transform.localScale -= new Vector3(12f,12f,12f);
				}
			}
			Destroy (gameObject);
			Debug.Log ("Not Destroyed)");
		}
	}

	#region IGvrGazeResponder implementation

	public void OnGazeEnter(){
		Debug.Log ("Gaze entered");

	}

	public void OnGazeExit(){
		Debug.Log ("gaze exited");

	}

	public void OnGazeTrigger(){
		player.Shoot();
		Debug.Log ("Pulled the trigger)");
	}

	#endregion

}