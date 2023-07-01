using System.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

using ThirdRealm.Debugging;

namespace ThirdRealm.GameMechanics.Core
{
	public class ScreenFader : MonoBehaviour
	{
		private static ScreenFader s_instance;

		[SerializeField]
		[Tooltip("Should the screen fade in when a new scene is loaded?")]
		private bool _fadeOnSceneLoaded = true;

		[SerializeField]
		[Tooltip("Color of the screen fader. Alpha will be modified when fading in/out")]
		private Color _fadeColor = Color.black;

		[SerializeField]
		private float _fadeInSpeed = 6f;

		[SerializeField]
		private float _fadeOutSpeed = 6f;

		[SerializeField]
		[Tooltip("Wait X seconds before fading scene in.")]
		private float _sceneLoadFadeDelay = 1f;

		private GameObject _fadeObject;

		private RectTransform _fadeObjectRect;

		private Canvas _fadeCanvas;

		private CanvasGroup _canvasGroup;

		private Image _fadeImage;

		private IEnumerator _fadeRoutine;

		private string _faderName = "ScreenFader";

		public static ScreenFader Instance
		{
			get
			{
				if (s_instance == null)
					s_instance = FindObjectOfType<ScreenFader>();

				if (s_instance == null)
					DebugLogger.LogError("Could not locate instance of ScreenFader!");

				return s_instance;
			}
		}

		public bool IsDoneFading { get; private set; }

		private void OnEnable()
		{
			SceneManager.sceneLoaded += OnSceneLoaded;
		}

		private void OnDisable()
		{
			SceneManager.sceneLoaded -= OnSceneLoaded;
		}

		private void Awake()
		{
			if (Instance == null)
				s_instance = this;

			Initialize();
		}

		#region Public Methods

		public void DoFadeIn()
		{
			if (_fadeRoutine != null)
				StopCoroutine(_fadeRoutine);

			if (_canvasGroup != null)
			{
				_fadeRoutine = DoFade(_canvasGroup.alpha, 1f);

				StartCoroutine(_fadeRoutine);
			}
		}

		public void DoFadeOut()
		{
			if (_fadeRoutine != null)
				StopCoroutine(_fadeRoutine);

			_fadeRoutine = DoFade(_canvasGroup.alpha, 0f);
			
			StartCoroutine(_fadeRoutine);
		}

		public void SetFadeLevel(float fadeLevel)
		{
			if (_fadeRoutine != null)
				StopCoroutine(_fadeRoutine);

			if (_canvasGroup == null)
				return;

			_fadeRoutine = DoFade(_canvasGroup.alpha, fadeLevel);

			StartCoroutine(_fadeRoutine);
		}

		#endregion // Public Methods

		#region Private Methods

		private void Initialize()
		{
			if (_fadeObject == null)
			{
				var childCanvas = GetComponentInChildren<Canvas>();

				// Found an existing ScreenFader. Remove this one
				if (childCanvas != null && childCanvas.transform.name == _faderName)
				{
					Destroy(gameObject);

					return;
				}

				_fadeObject = new GameObject();
				_fadeObject.transform.parent = Camera.main.transform;
				_fadeObject.transform.localPosition = new Vector3(0, 0, 0.03f);
				_fadeObject.transform.localEulerAngles = Vector3.zero;
				_fadeObject.transform.name = _faderName;

				_fadeCanvas = _fadeObject.AddComponent<Canvas>();
				_fadeCanvas.renderMode = RenderMode.WorldSpace;
				_fadeCanvas.sortingOrder = 100;

				_canvasGroup = _fadeObject.AddComponent<CanvasGroup>();
				_canvasGroup.interactable = false;

				_fadeImage = _fadeObject.AddComponent<Image>();
				_fadeImage.color = _fadeColor;
				_fadeImage.raycastTarget = false;

				// Stretch the image
				_fadeObjectRect = _fadeObject.GetComponent<RectTransform>();
				_fadeObjectRect.anchorMin = new Vector2(1, 0);
				_fadeObjectRect.anchorMax = new Vector2(0, 1);
				_fadeObjectRect.pivot = new Vector2(0.5f, 0.5f);
				_fadeObjectRect.sizeDelta = new Vector2(0.2f, 0.2f);
				_fadeObjectRect.localScale = new Vector2(2f, 2f);
			}
		}

		private void OnSceneLoaded(Scene scene, LoadSceneMode loadMode)
		{
			if (_fadeOnSceneLoaded && _fadeObject != null)
			{
				UpdateImageAlpha(_fadeColor.a);

				StartCoroutine(FadeOutWithDelay(_sceneLoadFadeDelay));
			}
		}

		private void UpdateImageAlpha(float alpha)
		{
			if (_canvasGroup == null)
				return;

			if (!_canvasGroup.gameObject.activeSelf)
				_canvasGroup.gameObject.SetActive(true);

			_canvasGroup.alpha = alpha;
		}

		private IEnumerator FadeOutWithDelay(float delaySeconds)
		{
			yield return new WaitForSecondsRealtime(delaySeconds);

			DoFadeOut();
		}

		private IEnumerator DoFade(float alphaFrom, float alphaTo)
		{
			IsDoneFading = false;

			var alpha = alphaFrom;

			UpdateImageAlpha(alpha);

			while (alpha != alphaTo)
			{
				if (alphaFrom < alphaTo)
				{
					alpha += Time.deltaTime * _fadeInSpeed;

					if (alpha > alphaTo)
						alpha = alphaTo;
				}
				else
				{
					alpha -= Time.deltaTime * _fadeOutSpeed;

					if (alpha < alphaTo)
						alpha = alphaTo;
				}

				UpdateImageAlpha(alpha);

				yield return new WaitForEndOfFrame();
			}

			yield return new WaitForEndOfFrame();

			UpdateImageAlpha(alphaTo);

			IsDoneFading = true;
		}

		#endregion // Private Methods
	}
}
