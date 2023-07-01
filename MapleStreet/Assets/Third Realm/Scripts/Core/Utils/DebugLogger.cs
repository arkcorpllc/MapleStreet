using System.Diagnostics;

namespace ThirdRealm.Debugging
{
	public static class DebugLogger
	{
		/// <summary>
		/// Log a piece of information to the Unity console.
		/// </summary>
		/// <param name="message">The information message to log</param>
		[Conditional("_3RC_LOG_VERBOSE"), Conditional("_3RC_LOG_INFO")]
		public static void Log(object message) => UnityEngine.Debug.Log(message);

		/// <summary>
		/// Log a warning to the Unity console.
		/// </summary>
		/// <param name="message">The warning message to log</param>
		[Conditional("_3RC_LOG_VERBOSE"), Conditional("_3RC_LOG_WARNINGS")]
		public static void LogWarning(object message) => UnityEngine.Debug.LogWarning(message);

		/// <summary>
		/// Log an error to the Unity console.
		/// </summary>
		/// <param name="message">The error message to log</param>
		[Conditional("_3RC_LOG_VERBOSE"), Conditional("_3RC_LOG_ERRORS")]
		public static void LogError(object message) => UnityEngine.Debug.LogError(message);
	}
}
