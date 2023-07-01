using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Timeline;
using UnityEngine.Playables;

namespace ThirdRealm.Timeline
{
	[System.Serializable]
	public class LightTrackBehaviour : PlayableBehaviour
	{
		public Color color = Color.white;

		public float intensity = 1f;
	}

	public class LightTrackAsset : PlayableAsset
	{
		public LightTrackBehaviour template;

		public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
		{
			var playable = ScriptPlayable<LightTrackBehaviour>.Create(graph, template);

			return playable;
		}
	}
}
