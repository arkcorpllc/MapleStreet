using System.Collections;
using UnityEngine;

public class Locationator : MonoBehaviour
{
    [Header("Locationating")]
    public Vector3[] locations;
    public Transform world; // Everything except the room and players
    public float fadeTime;
    public LineRendererManager[] lineRendererManagers;
    public GameObject before;
    public GameObject after;

    [Header("Faderang")]
    public AudioSource fadeUpAudio;
    public AudioSource fadeDownAudio;
    public Material[] roomFadeMaterials;

    [Header("Keybinds")]
    public KeyCode nextLocation;
    public KeyCode prevLocation;
    public KeyCode toggleTimeline;

    private int _index = -1;
    private IEnumerator _transition;
    private float timer = 0;

    private void Start()
    {
        foreach (Material m in roomFadeMaterials)
        {
            m.SetFloat("_Fade", 1);
            timer = 1;
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(nextLocation))
        {
            NextLocation();
        }
        if (Input.GetKeyDown(prevLocation))
        {
            PreviousLocation();
        }
        if (Input.GetKeyDown(toggleTimeline))
        {
            FlipTimeline();
        }
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            ChangeLocation(0);
        }
        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            ChangeLocation(1);
        }
        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            ChangeLocation(2);
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

    public void PreviousLocation()
    {
        _index--;
        if (_index < 0)
            _index = locations.Length - 1;

        if (_transition != null)
        {
            StopCoroutine(_transition);
        }
        _transition = Transition();
        StartCoroutine(_transition);
    }

    public void FlipTimeline ()
    {
        if (before.activeInHierarchy)
        {
            before.SetActive(false);
            after.SetActive(true);
        }
        else
        {
            before.SetActive(true);
            after.SetActive(false);
        }
    }

    IEnumerator Transition ()
    {
        if (timer < 0.1f)
            fadeUpAudio.Play();
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
        foreach (LineRendererManager lrm in lineRendererManagers)
        {
            lrm.GenerateLines();
        }

        fadeDownAudio.Play();
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
            Gizmos.DrawCube(l, new Vector3(6, 1, 9.7f));
        }
    }
}
