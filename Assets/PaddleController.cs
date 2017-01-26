using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PaddleController : MonoBehaviour {

	private float mouseDownPosX;
	private float onTouchPosX;
	private bool touched = false;
	private Rigidbody2D rb2d;

	public bool movingLeft = false;
	public bool movingRight = false;

	void Start () 
	{
		this.rb2d = GetComponent<Rigidbody2D>();
	}
	
	// Update is called once per frame
	void Update () {

		if(Input.GetMouseButtonDown(0))
		{
			mouseDownPosX = Camera.main.ScreenToWorldPoint(Input.mousePosition).x;
			onTouchPosX = transform.position.x;
			touched = true;
		}

		if(touched && Input.GetMouseButton(0))
		{
			float currentX = Camera.main.ScreenToWorldPoint(Input.mousePosition).x;
			HandleDeltaX(mouseDownPosX - currentX);
		}

		if(Input.GetMouseButtonUp(0))
		{
			movingLeft = false;
			movingRight = false;
		}
	}

	private void HandleDeltaX(float dX)
	{
		movingLeft = dX < 0;
		movingRight = !movingLeft;

		float currentY = transform.position.y;
		this.rb2d.MovePosition(new Vector3(onTouchPosX - dX, currentY, 0));
	}	
}
