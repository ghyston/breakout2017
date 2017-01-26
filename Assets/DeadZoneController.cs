using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeadZoneController : MonoBehaviour {

	void OnTriggerEnter2D(Collider2D collision) 
	{
		GameObject.Find("LogicScripts").GetComponent<BreakoutGameLogic>().OnBallLost();
	}
}
