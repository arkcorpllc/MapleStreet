using System.Collections;
using UnityEditor;
using UnityEngine;

public class Locationator : MonoBehaviour
{
    [Header("Locationating")]
    public Vector3[] locations;
    public Transform world; // Everything except the room and players
    public float fadeTime;

    [Header("Faderang")]
    public Material[] roomFadeMaterials;

    [Header("Keybinds")]
    public KeyCode nextLocation;

    private int _index = -1;
    private IEnumerator _transition;
    private float timer = 0;

    private void Start()
    {
        foreach (string name in MaterialEditor.GetMaterialPropertyNames(roomFadeMaterials))
        {
            print(name);
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(nextLocation))
        {
            NextLocation();
        }
    }

    public void ChangeLocation(int index)
    {
        _index = index;

        if (_transition != null)
        {
            StopCoroutine(_transition);
        }
        _transition = Transition();
        StartCoroutine(_transition);
    }

    public void NextLocation()
    {
        _index++;
        _index %= locations.Length;

        if (_transition != null)
        {
            StopCoroutine(_transition);
        }
        _transition = Transition();
        StartCoroutine(_transition);
    }

    IEnumerator Transition ()
    {
        while (timer < 1)
        {
            timer += Time.deltaTime / fadeTime;
            foreach (Material m in roomFadeMaterials) {
                m.SetFloat("_Fade", timer);
            }
            yield return null;
        }
        foreach (Material m in roomFadeMaterials)
        {
            m.SetFloat("_Fade", 1);
        }

        world.position = -locations[_index];

        while (timer > 0)
        {
            timer -= Time.deltaTime / fadeTime;
            foreach (Material m in roomFadeMaterials)
            {
                m.SetFloat("_Fade", timer);
            }
            yield return null;
        }
        foreach (Material m in roomFadeMaterials)
        {
            m.SetFloat("_Fade", 0);
        }
        timer = 0;

        _transition = null;
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.yellow;
        foreach (Vector3 l in locations)
        {
            Gizmos.DrawSphere(l, 5);
        }
    }
}
