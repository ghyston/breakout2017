using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BreakoutGameLogic : MonoBehaviour {

	[SerializeField]
	private GameObject wallPrefab;

	[SerializeField]
	private GameObject brickPrefab;


	[SerializeField]
	private GameObject paddlePrefab;

	[SerializeField]
	private GameObject ballPrefab;

	[SerializeField]
	private GameObject deadZonePrefab;

	[SerializeField]
	private Text textObj;

	private GameObject ball;
	private GameObject paddle;
	private int bricksCounter = 0;


	public float wallDepth = 0.1f;
	public float bricksLoPoint = 0.5f; // percentage from screen height
	public float bricksHiPoint = 0.9f; // percentage from screen height

	public float paddleDefaultWidth = 0.5f; // percentage from screen width

	public float paddlePosY = 0.1f; // percentage from screen height

	public const int bricksPerRow = 14;
	public const int rowsPerColor = 2;

	private int score = 0;

	// Use this for initialization
	void Start () 
	{
		BuildWalls();
		PopulateBricks();
		AddPaddleAndBall();
		AddDeadZone();
		UpdateScoreLabel();
	}

#region initialization

	private void BuildWalls()
	{
		float vertHeight = Camera.main.orthographicSize * 2;
		float horizWidth = Camera.main.aspect * vertHeight;
		float cameraZ = Camera.main.transform.position.z;

		Vector3 leftPos = new Vector3((this.wallDepth - horizWidth) / 2.0f, 0.0f, 0.0f);
		Vector3 rightPos = new Vector3((horizWidth - this.wallDepth) / 2.0f, 0.0f, 0.0f);
		Vector3 upPos = new Vector3(0.0f, (vertHeight - this.wallDepth) / 2.0f, 0.0f);
		
		GameObject leftWall = Instantiate(wallPrefab, leftPos, Quaternion.identity) as GameObject;
		leftWall.transform.localScale = new Vector3(this.wallDepth, vertHeight, 1.0f);

		GameObject rightWall = Instantiate(wallPrefab, rightPos, Quaternion.identity) as GameObject;
		rightWall.transform.localScale = new Vector3(this.wallDepth, vertHeight, 1.0f);

		GameObject upperWall = Instantiate(wallPrefab, upPos, Quaternion.identity) as GameObject;
		upperWall.transform.localScale = new Vector3(horizWidth, this.wallDepth, 1.0f);
	}

	private void PopulateBricks()
	{
		float vertHeight = Camera.main.orthographicSize * 2;
		float horizWidth = Camera.main.aspect * vertHeight;
		float cameraZ = Camera.main.transform.position.z;

		float bricksWidth = (horizWidth - this.wallDepth * 2.0f) / bricksPerRow;
		float bricksHeight = (this.bricksHiPoint - this.bricksLoPoint) * vertHeight / (rowsPerColor * (int)Brick.BrickType._COUNT);

		float lowY = (this.bricksLoPoint - 0.5f) * vertHeight + bricksHeight / 2.0f;
		float lowX = this.wallDepth - horizWidth / 2.0f + bricksWidth / 2.0f;;

		float debugDepth = 0.01f;

		//foreach (Brick.BrickType typeValue in Enum.GetValues(typeof(Brick.BrickType)))
		for (int brickType = (int)Brick.BrickType._LAST; brickType >= (int)Brick.BrickType._FIRST; brickType--)
		{
			for(int rowPosY = 0; rowPosY < rowsPerColor; rowPosY++)
			{
				for(int rowPosX = 0; rowPosX < bricksPerRow; rowPosX++)
				{
					Vector3 brickPos = new Vector3(lowX + rowPosX * bricksWidth, lowY + rowPosY * bricksHeight, 0.0f);
					GameObject brickObj = Instantiate(this.brickPrefab, brickPos, Quaternion.identity) as GameObject;				
					brickObj.transform.localScale = new Vector3(bricksWidth - debugDepth, bricksHeight - debugDepth, 1.0f);
					brickObj.GetComponent<Brick>().type = (Brick.BrickType)brickType;
					bricksCounter++;
				}
			}
			lowY += bricksHeight * rowsPerColor;
		}
	}

	private void AddPaddleAndBall()
	{
		float paddleWidth = Camera.main.aspect * Camera.main.orthographicSize * 2 * this.paddleDefaultWidth;

		Vector3 paddlePos = new Vector3(0.0f, - Camera.main.orthographicSize * (1.0f - this.paddlePosY), 0.0f);
		this.paddle = Instantiate(this.paddlePrefab, paddlePos, Quaternion.identity) as GameObject;				
		this.paddle.transform.localScale = new Vector3(paddleWidth, 0.1f, 1.0f);

		this.ball = Instantiate(this.ballPrefab, paddlePos, Quaternion.identity) as GameObject;
	}

	private void AddDeadZone()
	{
		float vertHeight = Camera.main.orthographicSize * 2;
		float horizWidth = Camera.main.aspect * vertHeight;

		Vector3 deadZonePos = new Vector3(0.0f, - Camera.main.orthographicSize, 0.0f);
		GameObject deadZoneObj = Instantiate(this.deadZonePrefab, deadZonePos, Quaternion.identity) as GameObject;
		deadZoneObj.transform.localScale = new Vector3(horizWidth, this.wallDepth, 1.0f);
	}	

	private void UpdateScoreLabel()
	{
		textObj.text = this.score.ToString();
	}

#endregion

#region Logic

	public void OnBallLost()
	{
		Destroy(ball);
		Destroy(paddle);
		AddPaddleAndBall();
	}

	public void onBrickRemoved(Brick.BrickType type)
	{
		bricksCounter--;

		if(bricksCounter <= 0)
		{
			Destroy(ball);
			Destroy(paddle);
			AddPaddleAndBall();
			PopulateBricks();
			this.score = 0;			
		}
		else
		{
			score += Brick.getPointsBy(type);
		}

		UpdateScoreLabel();
	}

#endregion

}
