using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Timeline;
using UnityEngine.Playables;

namespace ThirdRealm.Timeline
{
	[TrackClipType(typeof(LightTrackAsset))]
	[TrackBindingType(typeof(Light))]
	public class LightControlTrack : TrackAsset
	{
		public override Playable CreateTrackMixer(PlayableGraph graph, GameObject go, int inputCount)
		{
			return ScriptPlayable<LightControlMixerBehaviour>.Create(graph, inputCount);
		}
	}
}
