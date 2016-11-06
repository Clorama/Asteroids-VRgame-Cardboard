using UnityEngine;
using System.Collections;


[RequireComponent (typeof(Collider))]
[RequireComponent(typeof(AudioSource))]

public class Whitehouse : MonoBehaviour {

	public GameObject HouseExplosion;
	public int scoreValue = -25;


	void start() {
		

	
}
		void OnCollisionEnter(Collision collision) {
			if (collision.gameObject.tag == "Asteroid") {

			Instantiate (HouseExplosion, transform.position, transform.rotation);

		

			AudioSource audio = GetComponent<AudioSource>();
			audio.Play ();

			ScoreManager.score += scoreValue;
			Destroy(gameObject);



	}
	} 


}