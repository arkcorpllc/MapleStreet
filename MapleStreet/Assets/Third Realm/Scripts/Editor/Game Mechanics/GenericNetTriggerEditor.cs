using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEditor;

using ThirdRealm.GameMechanics;

namespace ThirdRealm.Editor.GameMechanics
{
	[CustomEditor(typeof(GenericNetTrigger))]
	public class GenericNetTriggerEditor : UnityEditor.Editor
	{
		private SerializedProperty _triggerEnterEventProp;
		private SerializedProperty _triggerExitEventProp;
		private SerializedProperty _targetLayerMaskProp;
		private SerializedProperty _targetTagProp;
		private SerializedProperty _activateOnceProp;

		private bool _toggleTargetLayerMask;
		private bool _toggleTargetTag;

		private void OnEnable()
		{
			_triggerEnterEventProp = serializedObject.FindProperty("_onTriggerEnterEvent");
			_triggerExitEventProp = serializedObject.FindProperty("_onTriggerExitEvent");
			_targetLayerMaskProp = serializedObject.FindProperty("_targetLayerMask");
			_targetTagProp = serializedObject.FindProperty("_targetTag");
			_activateOnceProp = serializedObject.FindProperty("activateOnce");

			_toggleTargetLayerMask = ((GenericNetTrigger)target).useLayerMask;
			_toggleTargetTag = ((GenericNetTrigger)target).useTag;
		}

		public override void OnInspectorGUI()
		{
			serializedObject.Update();

			EditorGUILayout.HelpBox("Filter by layer, tag, or both the objects that touch this trigger object", MessageType.Info);

			_toggleTargetLayerMask = GUILayout.Toggle(_toggleTargetLayerMask, "Filter by Layer");
			_toggleTargetTag = GUILayout.Toggle(_toggleTargetTag, "Filter by Tag");

			EditorGUILayout.Separator();

			if (_toggleTargetLayerMask)
				EditorGUILayout.PropertyField(_targetLayerMaskProp);

			if (_toggleTargetTag)
				EditorGUILayout.PropertyField(_targetTagProp);

			EditorGUILayout.Separator();

			EditorGUILayout.PropertyField(_activateOnceProp);

			EditorGUILayout.Separator();

			EditorGUILayout.PropertyField(_triggerEnterEventProp);
			EditorGUILayout.PropertyField(_triggerExitEventProp);

			((GenericNetTrigger)target).useLayerMask = _toggleTargetLayerMask;
			((GenericNetTrigger)target).useTag = _toggleTargetTag;

			serializedObject.ApplyModifiedProperties();
		}
	}
}
