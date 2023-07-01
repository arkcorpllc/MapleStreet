using System.Collections;
using System.Collections.Generic;
using System.Linq;

using UnityEngine;

using Unity.VisualScripting;

using Photon.Pun;

namespace ThirdRealm.VisualScripting
{
	[RequireComponent(typeof(PhotonView))]
	public class VisualScriptingPhotonBridge : MonoBehaviour
	{
		public static VisualScriptingPhotonBridge s_instance;

		public static VisualScriptingPhotonBridge Instance
		{
			get { return s_instance; }
		}

		[field: SerializeField]
		public PhotonView View { get; set; }

		private void Awake()
		{
			if (!s_instance)
				s_instance = this;

			if (!View)
				View = GetComponent<PhotonView>();
		}

		public void RaiseRPC(int targetId, RpcTarget target, params object[] args)
		{
			View.RPC("RPC_VisualScriptingCustomEvent", target, targetId, args);
		}

		[PunRPC]
		public void RPC_VisualScriptingCustomEvent(int targetId, params object[] args)
		{
			var target = PhotonView.Find(targetId);

			if (target)
				CustomEvent.Trigger(target.gameObject, (string)args[0], args.Skip(1).ToArray());
		}
	}

	public class PhotonRPC : Unit
	{
		[DoNotSerialize]
		[PortLabelHidden]
		public ControlInput inputTrigger;

		[DoNotSerialize]
		[PortLabelHidden]
		public ControlOutput outputTrigger;

		[DoNotSerialize]
		[NullMeansSelf]
		public ValueInput targetPhotonView;

		[DoNotSerialize]
		public ValueInput rpcTarget;

		[DoNotSerialize]
		[AllowsNull]
		public ValueInput targetEventName;
		
		[DoNotSerialize]
		[AllowsNull]
		public ValueInput parameters;

		protected override void Definition()
		{
			inputTrigger = ControlInput("inputTrigger", (Flow) => {
				PhotonView targetView = targetPhotonView.hasValidConnection ? Flow.GetValue<PhotonView>(targetPhotonView) : Flow.GetConvertedValue(targetPhotonView.NullMeansSelf()) as PhotonView;

				if (!targetView)
					return outputTrigger;

				var targetEvent = Flow.GetValue<string>(targetEventName);
				var args = parameters.hasValidConnection ? Flow.GetValue<AotList>(parameters) : null;
				var targetType = rpcTarget.hasValidConnection ? Flow.GetValue<RpcTarget>(rpcTarget) : RpcTarget.AllViaServer;

				if (targetEvent == string.Empty)
				{
					// Check for event name
					if (args.Equals(null) || args[0].GetType() != typeof(string) || args[0].Equals(string.Empty))
						return outputTrigger;
				}
				else
				{
					var newArgs = new AotList();

					newArgs.Add(targetEvent);

					if (args != null)
						foreach (var element in args)
							newArgs.Add(element);

					args = newArgs;
				}

				var tmpList = args.ToArray();

				VisualScriptingPhotonBridge.Instance.RaiseRPC(targetView.ViewID, targetType, tmpList);

				return outputTrigger;
			});

			outputTrigger = ControlOutput("outputTrigger");

			targetPhotonView = ValueInput("targetPhotonView", (PhotonView)default);
			targetEventName = ValueInput("targetEventName", string.Empty);
			parameters = ValueInput("parameters", (AotList)default);
			rpcTarget = ValueInput("rpcTarget", RpcTarget.AllViaServer);

			Succession(inputTrigger, outputTrigger);
		}
	}
}
