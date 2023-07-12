using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomTree : MonoBehaviour
{
    public List<GameObject> treeList = new List<GameObject>();
    public int amount;
    public float distance;
    public float spread;
    public Vector2 scale;
    
    // Start is called before the first frame update
    void Start()
    {
        GenerateTrees();
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            ScreenCapture.CaptureScreenshot("Trees.png");
        }
    }

    void GenerateTrees()
    {
        for(int i = 0; i < amount; i++)
        {
            GameObject temp = Instantiate(treeList[Random.Range(0,treeList.Count-1)]);
            temp.transform.position = new Vector3(Random.Range(-spread, spread), 0 , Random.Range(distance-10, distance+10));
            temp.transform.Rotate(Vector3.up, Random.Range(0, 359));
            float tempScale = Random.Range(scale.x, scale.y);
            temp.transform.localScale = new Vector3(tempScale,tempScale,tempScale);
        }
    }
}
