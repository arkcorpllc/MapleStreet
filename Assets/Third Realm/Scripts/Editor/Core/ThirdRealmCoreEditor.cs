using UnityEngine;

using UnityEditor;

using ThirdRealm.Networking;

namespace ThirdRealm.Editor
{
	[InitializeOnLoad]
	[CustomEditor(typeof(ThirdRealmCore))]
	public class ThirdRealmCoreEditor : UnityEditor.Editor
	{
		static ThirdRealmCoreEditor()
		{
			EditorApplication.update += OnEditorUpdate;

			BuildPlayerWindow.RegisterBuildPlayerHandler(OnPreprocessBuild);
		}

		private static ThirdRealmCore _target0;

		private static ThirdRealmNetCore _target1;

		private static void OnEditorUpdate()
		{
			if (!_target0 || !_target1)
			{
				_target0 = FindObjectOfType<ThirdRealmCore>();

				if (!_target0)
					return;

				_target1 = _target0.GetComponent<ThirdRealmNetCore>();

				if (!_target0 || !_target1)
					EditorApplication.ExitPlaymode();
			}
		}

		public static void OnPreprocessBuild(BuildPlayerOptions options)
		{
			var err = false;

			// Third Realm Core Specific
#if UNITY_STANDALONE
			if (!err && _target0.spawnLocalAvatar)
				if (EditorUtility.DisplayDialog("Third Realm Core Warning", "You are about to build the PC client and still have \"spawnLocalAvatar\" ticked. Do you wish to Cancel?", "Yes, Cancel.", "No, Continue to Build"))
					err = true;

			if (!err && _target0.emulateHmdUser)
				if (EditorUtility.DisplayDialog("Third Realm Core Warning", "You are about to build the PC client and still have \"emulateHmdUser\" ticked. Do you wish to Cancel?", "Yes, Cancel.", "No, Continue to Build"))
					err = true;
#endif
			if (!err && _target0.LocomotionEnabled)
				if (EditorUtility.DisplayDialog("Third Realm Core Warning", "You are about to build the project and still have \"LocomotionEnabled\" ticked. Do you wish to Cancel?", "Yes, Cancel.", "No, Continue to Build"))
					err = true;

			Debug.Log(err);

			if (err == false)
			{
				BuildPlayerWindow.DefaultBuildMethods.BuildPlayer(options);

				return;
			}

			throw new BuildPlayerWindow.BuildMethodException("[3RC][ThirdRealmCore]: Build Canceled!");
		}
	}
}
