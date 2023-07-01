using System;
using System.IO;
using System.Text;
using System.Collections;
using System.Threading.Tasks;

using Unity.VisualScripting;

using UnityEngine;
using UnityEngine.Networking;

using ThirdRealm.Networking;
using ThirdRealm.Debugging;

namespace ThirdRealm.Analytics
{
	/// <summary>
	/// This class handles the processing and sending of Unity Analytic events
	/// </summary>
	public class AnalyticsManager : MonoBehaviour
	{
		/// <summary>
		/// Used to tag an event to a specific device and whether it should send immediately upon being called or into the event queue
		/// to be sent on the next flush cycle.
		/// </summary>
		public enum SendMode
		{
			ALL_NORMAL,
			ALL_IMMEDIATE,
			PC_ONLY_NORMAL,
			PC_ONLY_IMMEDIATE,
			ANDROID_ONLY_NORMAL,
			ANDROID_ONLY_IMMEDIATE,
		}

		public int updateRate = 120;

		private static AnalyticsManager s_instance;

		public static AnalyticsManager Instance { get { return s_instance; } }

		public static bool IsInitialized { get; private set; } = false;
		public static bool IsReady { get; set; } = false;
		public static bool IsWriting { get; set; } = false;

		#region UNITY CALLBACKS

		private void Awake()
		{
			if (!s_instance)
				s_instance = this;
			else
				Destroy(this);
		}

		#endregion // UNITY CALLBACKS \\

		#region PUBLIC METHODS

		public void SendAnalyticData(AnalyticEvent analyticEvent, SendMode sendMode = SendMode.ALL_NORMAL, bool sanitized = false)
		{
			if (!sanitized && !IsValidSendMode(ref sendMode))
				return;

			IsWriting = true;

			StartCoroutine(SendWebRequest(analyticEvent));
		}

		public async void BeginInitializeAnalytics()
		{
			while (!ThirdRealmNetCore.Instance || !ThirdRealmCore.IsNetReady || ApplicationManager.LocationIdentifier.Equals(string.Empty))
			{
				DebugLogger.LogWarning($"[3RC][AnalyticsManager]: Waiting for: Core: {ThirdRealmNetCore.Instance} | IsNetReady = {ThirdRealmCore.IsNetReady} | Location: {ApplicationManager.LocationIdentifier}");

				await Task.Yield();
			}

			if (ThirdRealmNetCore.Instance.connectionMode == ConnectionMode.OFFLINE)
			{
				DebugLogger.LogWarning("[3RC][AnalyticsManager]: You are currently in offline mode so analytics will be disabled.");

				IsInitialized = false;

				return;
			}

			if (ThirdRealmNetCore.Instance.connectionMode == ConnectionMode.DEVELOPMENT)
			{
				DebugLogger.LogWarning("[3RC][AnalyticsManager]: You are currently in development mode. Analytics will be disabled.");

				IsInitialized = false;

				return;
			}

			IsInitialized = true;

			DebugLogger.Log($"[3RC][AnalyticsManager]: Analytics initialized!");

			var file = new FileInfo(ApplicationManager.GetMVDataPath + "bl_analytic.dat");

			var analyticEventsJson = Utils.Utils.ReadFile(file);

			if (analyticEventsJson is null)
				return;

			// Delete the file. If the following backlog fails to upload
			// again, the application will create the file again and
			// populate it appropriately.
			file.Delete();

			foreach (var jsonEncode in analyticEventsJson)
			{
				if (string.IsNullOrEmpty(jsonEncode))
					continue;

				var analyticEvent = JsonUtility.FromJson<AnalyticEvent>(jsonEncode);

				DebugLogger.Log(analyticEvent.ToString());

				SendAnalyticData(analyticEvent, SendMode.ALL_IMMEDIATE);
			}
		}

		#endregion // PUBLIC METHODS \\

		#region PRIVATE METHODS

		private IEnumerator SendWebRequest(AnalyticEvent analyticEvent)
		{
			var jsonEncode = JsonUtility.ToJson(analyticEvent);

			byte[] raw = Encoding.UTF8.GetBytes(jsonEncode);

			//"https://www.megaversevr.com/api/add/"
			using UnityWebRequest request = new UnityWebRequest("https://www.megaversevr.com/api/add/", UnityWebRequest.kHttpVerbPOST);

			request.uploadHandler = new UploadHandlerRaw(raw);
			request.method = UnityWebRequest.kHttpVerbPOST;
			request.timeout = 10;
			request.useHttpContinue = false;
			request.disposeUploadHandlerOnDispose = true;
			request.disposeDownloadHandlerOnDispose = true;
			request.disposeCertificateHandlerOnDispose = true;
			request.SetRequestHeader("Content-Type", "application/json");

			yield return request.SendWebRequest();

			DebugLogger.LogWarning(request.ToString());
			DebugLogger.LogWarning(request.result);

			if (request.result != UnityWebRequest.Result.Success)
			{
				DebugLogger.LogWarning($"[3RC][AnalyticsManager]: Error communicating with web server! Error Message: {request.error}");

				// TODO: Consolidate this with the ApplicationManager
				var filePath = ApplicationManager.GetMVDataPath + "bl_analytic.dat";
				var file = new FileInfo(filePath);

				FileStream fs = null;

				if (!File.Exists(file.FullName))
					fs = file.Create();

				if (fs == null)
					fs = new FileStream(file.FullName, FileMode.Append, FileAccess.Write);

				using StreamWriter sw = new StreamWriter(fs);

				sw.WriteLine(jsonEncode);
				sw.Flush();
				sw.Close();
				// End of TODO
			}
			else
				DebugLogger.LogWarning("[3RC][AnalyticsManager]: Successfully sent data to web sever!");

			IsWriting = false;
		}

		private static bool IsValidSendMode(ref SendMode sendMode)
		{
			if (!IsInitialized)
			{
				DebugLogger.LogWarning("[3RC][AnalyticsManager]: You are attempting to send analytic data but analytics have not been initialized.");

				return false;
			}

#if UNITY_ANDROID && !UNITY_EDITOR
			if (sendMode == SendMode.PC_ONLY_IMMEDIATE ||
				sendMode == SendMode.PC_ONLY_NORMAL)
				return false;
#elif UNITY_STANDALONE || UNITY_EDITOR
			if (sendMode == SendMode.ANDROID_ONLY_IMMEDIATE ||
				sendMode == SendMode.ANDROID_ONLY_NORMAL)
				return false;
#endif

			return true;
		}

		#endregion // PRIVATE METHODS \\
	}

	[Serializable]
	public sealed class AnalyticEvent
	{
		public string projectName;
		public string eventName;
		public string deviceId;
		public string locationId;
		public string timestamp;

		public int sessionDuration;

		public AnalyticEvent(string projectName, string eventName, string deviceId, string locationId, string timestamp, int sessionDuration)
		{
			this.projectName = projectName;
			this.eventName = eventName;
			this.deviceId = deviceId;
			this.locationId = locationId;
			this.timestamp = timestamp;
			this.sessionDuration = sessionDuration;

			DebugLogger.LogWarning(this.ToString());
		}

		public static AnalyticEvent Now(string eventName)
		{
			var pN = Application.productName;
			var eN = eventName;
			var ts = DateTime.UtcNow.ToString();
			var sd = Mathf.FloorToInt(Time.realtimeSinceStartup);
			var dId = ApplicationManager.GetDeviceID;
			var lId = ApplicationManager.LocationIdentifier;

			return new AnalyticEvent(pN, eN, dId, lId, ts, sd);
		}

		public override string ToString()
		{
			var sb = new StringBuilder();

			sb.Append($"ProjectName: {projectName}\n");
			sb.Append($"EventName: {eventName}\n");
			sb.Append($"Device ID: {deviceId}\n");
			sb.Append($"Timestamp (UTC): {timestamp}\n");
			sb.Append($"SessionDuration: {sessionDuration}");

			return sb.ToString();
		}
	}

	[UnitTitle("Send Analytic Event")]
	public class SendAnalyticEventNode : Unit
	{
		[DoNotSerialize, PortLabelHidden]
		public ControlInput inputTrigger;

		[DoNotSerialize, PortLabelHidden]
		public ControlOutput outputTrigger;

		[DoNotSerialize]
		public ValueInput eventType;

		[DoNotSerialize]
		public ValueInput analyticEventName;

		protected override void Definition()
		{
			inputTrigger = ControlInput("inputTrigger", (Flow) =>
			{
				var eventName = Flow.GetValue(analyticEventName) as string;

				if (eventName == string.Empty)
					return outputTrigger;

				AnalyticsManager.Instance.SendAnalyticData(AnalyticEvent.Now(eventName), Flow.GetValue<AnalyticsManager.SendMode>(eventType));

				return outputTrigger;
			});

			outputTrigger = ControlOutput("outputTrigger");

			eventType = ValueInput("eventType", AnalyticsManager.SendMode.ALL_NORMAL);

			analyticEventName = ValueInput("analyticEventName", string.Empty);

			Requirement(analyticEventName, inputTrigger);

			Succession(inputTrigger, outputTrigger);
		}
	}
}
