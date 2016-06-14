using UnityEngine;
using System.Collections;

public class NewBehaviourScript : MonoBehaviour {
    public float speed = 30.0f;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
        Vector3 moveDir = new Vector3 (Input.GetAxis("Horizontal") , 0, Input.GetAxis("Vertical"));
        moveDir = transform.TransformDirection (moveDir);
        moveDir *= Time.deltaTime * 30.0f;
        moveDir += transform.position;

        transform.position = moveDir;

	}
}
