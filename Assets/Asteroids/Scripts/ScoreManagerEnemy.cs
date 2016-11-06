using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreManagerEnemy : MonoBehaviour {

	public static int enemyscore;

	Text text;



	// Use this for initialization
	void Awake () {
		text = GetComponent <Text> ();
		enemyscore = 0;
		
	
	}
	
	// Update is called once per frame
	void Update () {

		text.text = "Trumps Trumped: " + enemyscore + "/10";

		if (enemyscore == 10)

			text.text = "YOU SAVED AMERICA!!!";
	
	}
}
