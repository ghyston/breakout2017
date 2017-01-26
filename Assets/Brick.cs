using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Brick : MonoBehaviour {

	public enum BrickType
	{
		_FIRST,
		RED = _FIRST,
		ORANGE,
		GREEN,
		YELLOW,
		_LAST = YELLOW,
		_COUNT
	};

	static public Color getColorBy(BrickType type)
	{
		switch(type)
		{
			case BrickType.RED: 	return new Color(255, 0, 0);
			case BrickType.ORANGE: 	return new Color(255,165,0);
			case BrickType.GREEN:	return new Color(0, 255, 0);
			case BrickType.YELLOW:	return new Color(255,255,0);
		}
		return new Color(0,0,0);
	}

	static public int getPointsBy(BrickType type)
	{
		switch(type)
		{
			case BrickType.RED: 	return 7;
			case BrickType.ORANGE: 	return 5;
			case BrickType.GREEN:	return 3;
			case BrickType.YELLOW:	return 1;
		}
		return 0;
	}

	public BrickType type;

	// Use this for initialization
	void Start () {
		this.GetComponent<Renderer>().material.color = getColorBy(this.type);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnCollisionEnter2D(Collision2D collision) 
	{
		GameObject.Find("LogicScripts").GetComponent<BreakoutGameLogic>().onBrickRemoved(this.type);
		Destroy(gameObject);
	}
}
