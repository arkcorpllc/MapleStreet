using System.Collections.Generic;
using UnityEngine;

public class LineRendererManager : MonoBehaviour
{
    public float curveAmount;
    public int resolution = 10;
    public Material lineMaterial;
    public float lineWidth = 0.2f;

    private List<GameObject> lineObjects = new List<GameObject>();

    private void Start()
    {
        GenerateLines();
    }

    public void GenerateLines()
    {
        DeleteLines();

        Transform[] childTransforms = GetComponentsInChildren<Transform>();
        List<Transform> pollGroupTransforms = new List<Transform>();

        foreach (Transform child in childTransforms)
        {
            if (child != transform)
            {
                pollGroupTransforms.Add(child);
            }
        }

        Transform[] pollGroups = pollGroupTransforms.ToArray();

        AddLineRenderers(pollGroups);
    }

    void AddLineRenderers(Transform[] pollGroups)
    {
        Dictionary<string, List<Transform>> pollDictionary = new Dictionary<string, List<Transform>>();

        // Group the polls by name
        foreach (Transform pollGroup in pollGroups)
        {
            foreach (Transform poll in pollGroup)
            {
                if (poll.name == "poll")
                    continue;

                string pollName = poll.name;
                if (!pollDictionary.ContainsKey(pollName))
                {
                    pollDictionary[pollName] = new List<Transform>();
                }
                pollDictionary[pollName].Add(poll);
            }
        }

        // Create lines for each group
        foreach (var pollGroup in pollDictionary.Values)
        {
            for (int i = 0; i < pollGroup.Count - 1; i++)
            {
                Transform startPoint = pollGroup[i];
                Transform endPoint = pollGroup[i + 1];

                // Create a new GameObject to hold the LineRenderer component
                GameObject lineObject = new GameObject("LineRenderer");
                lineObject.transform.parent = transform;

                // Add LineRenderer component
                LineRenderer lineRenderer = lineObject.AddComponent<LineRenderer>();

                // Set the material
                lineRenderer.material = lineMaterial;

                // Set the positions of the LineRenderer
                lineRenderer.positionCount = resolution;

                Vector3 startPosition = startPoint.position;
                Vector3 endPosition = endPoint.position;
                Vector3 midPosition = (startPosition + endPosition) / 2.0f;

                // Set the control point position to create a curve
                midPosition.y -= curveAmount;

                lineRenderer.SetPosition(0, startPosition);

                for (int j = 1; j < resolution - 1; j++)
                {
                    float t = j / (float)(resolution - 1);
                    Vector3 position = CalculatePointOnCurve(startPosition, midPosition, endPosition, t);
                    lineRenderer.SetPosition(j, position);
                }

                lineRenderer.SetPosition(resolution - 1, endPosition);

                // Set the line width
                lineRenderer.startWidth = lineWidth;
                lineRenderer.endWidth = lineWidth;

                lineObjects.Add(lineObject);
            }
        }
    }

    void DeleteLines()
    {
        foreach (GameObject lineObject in lineObjects)
        {
            Destroy(lineObject);
        }
        lineObjects.Clear();
    }

    Vector3 CalculatePointOnCurve(Vector3 p0, Vector3 p1, Vector3 p2, float t)
    {
        float u = 1 - t;
        float tt = t * t;
        float uu = u * u;

        Vector3 point = uu * p0 + 2 * u * t * p1 + tt * p2;
        return point;
    }
}