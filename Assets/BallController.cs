using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallController : MonoBehaviour {

	private bool gameStarted = false;

	public float speed = 5.0f;

	private Rigidbody2D rb2d;

	// Use this for initialization
	void Start () {
		this.rb2d = GetComponent<Rigidbody2D>();
	}
	
	// Update is called once per frame
	void Update () 
	{

		if(!this.gameStarted)
		{
			if(Input.GetMouseButtonDown(0))
			{
				StartBall();
			}
			return;
		}

		LimitSpeed();
		FixHorizontalOnlyMovements();
	}

	private void LimitSpeed()
	{
		Vector2 velocity = this.rb2d.velocity;
		velocity.Normalize();
		this.rb2d.velocity = velocity * this.speed;
	}


	//@note: quickfix for situation, when ball flying only between side walls and not dropping down
	private void FixHorizontalOnlyMovements()
	{
		if(Mathf.Abs(this.rb2d.velocity.y) >= 0.1)
			return;
			
		this.rb2d.AddForce(new Vector3(0.0f, Random.Range(10.0f, 50.0f), 0.0f ));
	}

	void StartBall()
	{
		if(this.gameStarted)
			return;

		this.rb2d.AddForce(new Vector3(Random.Range(-100.0f, 100.0f), 100.0f, 0.0f));
		this.gameStarted = true;
	}

	void OnCollisionEnter2D(Collision2D collision) 
	{
		if(!collision.gameObject.CompareTag("Paddle"))
			return;

		PaddleController pc = collision.gameObject.GetComponent<PaddleController>();
		if(pc.movingLeft || pc.movingRight)
		{
			this.rb2d.velocity = new Vector2(0.0f, 0.0f);
			if(pc.movingLeft)
				this.rb2d.AddForce(new Vector3(-100.0f, 100.0f, 0.0f));
			if(pc.movingRight)
				this.rb2d.AddForce(new Vector3(100.0f, 100.0f, 0.0f));
		}
	}
}
