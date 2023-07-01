using System;
using System.IO;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;

using ThirdRealm.Debugging;

namespace ThirdRealm.Utils
{
	public static class Utils
	{
		/// <summary>
		/// Create an asynchronous task that times-out after a determined amount of time
		/// </summary>
		/// <param name="startTask">The task to complete or timeout</param>
		/// <param name="timeout">The amount of time as a TimeSpan object until timeout occurs</param>
		/// <param name="cancellationToken">The cancellation token used to cancel either or both of the tasks this method uses</param>
		/// <returns></returns>
		public static async Task TimeoutAfterAsync(Func<CancellationToken, Task> startTask, TimeSpan timeout, CancellationToken cancellationToken)
		{
			using var timeoutCancellation = new CancellationTokenSource();
			using var combinedCancellation = CancellationTokenSource.CreateLinkedTokenSource(cancellationToken, timeoutCancellation.Token);

			var originalTask = startTask(combinedCancellation.Token);
			var delayTask = Task.Delay(timeout, timeoutCancellation.Token);
			var completedTask = await Task.WhenAny(originalTask, delayTask);

			if (completedTask == originalTask)
			{
				if (originalTask.IsFaulted)
					throw originalTask.Exception;

				timeoutCancellation.Cancel();
			}
			else
			{
				combinedCancellation.Cancel();

				DebugLogger.LogWarning("Task Canceled!");

				throw new TimeoutException();
			}
		}

		/// <summary>
		/// Create an asynchronous task that times-out after a determined amount of time and returns a Task result
		/// </summary>
		/// <typeparam name="TResult">Type of the returned result</typeparam>
		/// <param name="startTask">The task to complete or timeout</param>
		/// <param name="timeout">The amount of time as a TimeSpan object until timeout occurs</param>
		/// <param name="cancellationToken">The cancellation token used to cancel either or both of the tasks this method uses</param>
		/// <returns>Task of type <typeparamref name="TResult"/></returns>
		public static async Task<TResult> TimeoutAfterAsync<TResult>(Func<CancellationToken, Task<TResult>> startTask, TimeSpan timeout, CancellationToken cancellationToken)
		{
			using var timeoutCancellation = new CancellationTokenSource();
			using var combinedCancellation = CancellationTokenSource.CreateLinkedTokenSource(cancellationToken, timeoutCancellation.Token);

			var originalTask = startTask(combinedCancellation.Token);
			var delayTask = Task.Delay(timeout, timeoutCancellation.Token);
			var completedTask = await Task.WhenAny(originalTask, delayTask);

			if (completedTask == originalTask)
			{
				timeoutCancellation.Cancel();

				return await originalTask;
			}
			else
			{
				combinedCancellation.Cancel();

				DebugLogger.LogWarning("Task Canceled!");

				throw new TimeoutException();
			}
		}

		public static string[] ReadFile(FileInfo info)
		{
			if (!File.Exists(info.FullName))
				return null;

			List<string> result = new List<string>(8);

			int i = 0;

			using StreamReader reader = new StreamReader(info.OpenRead());

			while (!reader.EndOfStream)
			{
				result.Add(reader.ReadLine());

				i++;
			}

			reader.Close();

			if (result.Count < 1)
				return null;

			return result.ToArray();
		}
	}

	public static class EnumUtils
	{
		/// <summary>
		/// Get the <typeparamref name="TEnum"/> flag value associated with the argument <paramref name="value"/>
		/// </summary>
		/// <typeparam name="TEnum"></typeparam>
		/// <param name="value"></param>
		/// <returns>The <typeparamref name = "TEnum"/> associated with the enum value at 1 left-shift <paramref name="value"/></returns>
		public static TEnum GetFlag<TEnum>(int value) where TEnum : Enum => GetValueInt<TEnum>(1 << value);

		/// <summary>
		/// Get the <typeparamref name="TEnum"/> value associated with the given <paramref name="value"/>
		/// </summary>
		/// <typeparam name="TEnum"></typeparam>
		/// <param name="value"></param>
		/// <returns>The associated <typeparamref name="TEnum"/> value that corresponds with <paramref name="value"/></returns>
		public static TEnum GetValueInt<TEnum>(int value) where TEnum : Enum
		{
			var values = Enum.GetValues(typeof(TEnum));

			foreach (var val in values)
				if ((int)val == value)
					return (TEnum)val;

			return default;
		}

		/// <summary>
		/// Get the associated <typeparamref name="TEnum"/> that corresponds with <paramref name="value"/>
		/// </summary>
		/// <typeparam name="TEnum"></typeparam>
		/// <param name="value"></param>
		/// <returns>The <typeparamref name="TEnum"/> value associated with the given <paramref name="value"/></returns>
		public static TEnum GetValueByte<TEnum>(byte value) where TEnum : Enum
		{
			var values = Enum.GetValues(typeof(TEnum));

			foreach (var val in values)
				if ((byte)val == value)
					return (TEnum)val;

			return default;
		}
	}

	#region Utility Types

	[Serializable]
	public class SerializableDictionary<TKey, TVal> : Dictionary<TKey, TVal>, ISerializationCallbackReceiver
	{
		[SerializeField]
		private List<TKey> keys = new List<TKey>();

		[SerializeField]
		public List<TVal> values = new List<TVal>();

		public void OnBeforeSerialize()
		{
			keys.Clear();
			values.Clear();

			foreach (KeyValuePair<TKey, TVal> pair in this)
			{
				keys.Add(pair.Key);
				values.Add(pair.Value);
			}
		}

		public void OnAfterDeserialize()
		{
			Clear();

			if (keys.Count != values.Count)
				throw new Exception($"there are {keys.Count} keys and {values.Count} values after deserialization. Make sure that both key and value types are serializable.");

			for (int i = 0; i < keys.Count; i++)
				Add(keys[i], values[i]);
		}
	}

	#endregion // Utility Types
}

namespace ThirdRealm.Utils.Extensions
{
	public static class MaterialExtensions
	{
		/// <summary>
		/// Use this method on a given Renderer object instance
		/// </summary>
		/// <param name="renderer"></param>
		/// <param name="index"></param>
		/// <param name="newMaterial"></param>
		public static void ModifyMaterialAtIndex(this Renderer renderer, int index, Material newMaterial)
		{
			var tmpMats = renderer.materials;

			tmpMats[index] = newMaterial;

			renderer.materials = tmpMats;
		}
	}

	public static class MathExtensions
	{
		/// <summary>
		/// Use this method on a Vector3 object type to convert its' X and Y components to a Vector2
		/// </summary>
		/// <param name="vector">3-dimensional vector to be "converted"</param>
		/// <returns>new 2-dimensional vector made up of the X and Y components, respectively, of the given 3-dimensional vector</returns>
		public static Vector2 ToVector2_XY(this Vector3 vector) => new Vector2(vector.x, vector.y);

		/// <summary>
		/// Use this method on a Vector3 object type to convert its' X and Y components to a Vector2
		/// </summary>
		/// <param name="vector">3-dimensional vector to be "converted"</param>
		/// <returns>new 2-dimensional vector made up of the X and Z components, respectively, of the given 3-dimensional vector</returns>
		public static Vector2 ToVector2_XZ(this Vector3 vector) => new Vector2(vector.x, vector.z);

		/// <summary>
		/// Use this method on a Vector3 object type to convert its' Z and Y components to a Vector2
		/// </summary>
		/// <param name="vector">3-dimensional vector to be "converted"</param>
		/// <returns>new 2-dimensional vector made up of the Z and Y components, respectively, of the given 3-dimensional vector</returns>
		public static Vector2 ToVector2_ZY(this Vector3 vector) => new Vector2(vector.z, vector.y);

		/// <summary>
		/// Use this method on a float data type to determine if it is within the given min and max bounds
		/// </summary>
		/// <param name="value">The given value to be tested</param>
		/// <param name="min">The minimum bound</param>
		/// <param name="max">The maximum bound</param>
		/// <returns>
		///		<b>true</b> if value is within the min/max bounds<br />
		///		<b>false</b> if value is not within the min/max bounds
		/// </returns>
		public static bool WithinThreshold(this float value, float min, float max) => value >= min && value <= max;
	}

	public static class ConversionExtensions
	{
		/// <summary>
		/// Use this method to convert a given System.Enum object value to a byte
		/// </summary>
		/// <typeparam name="TEnum"></typeparam>
		/// <param name="value">The System.Enum object to convert</param>
		/// <returns>The byte value represented by the given <typeparamref name="TEnum"/></returns>
		public static byte EnumToByte<TEnum>(this TEnum value) where TEnum : Enum => (byte)(object)value;
	}

	public static class StringExtensions
	{
		public static string ToHex(this byte[] byteArray)
		{
			var sb = new StringBuilder(byteArray.Length * 2);

			foreach (var b in byteArray)
				sb.AppendFormat("{0:X2}", b);

			return sb.ToString();
		}
	}

	public static class SystemObjectExtensions
	{
		/// <summary>
		/// Compare this object to another
		/// </summary>
		/// <param name="obj">this object</param>
		/// <param name="other">other object</param>
		/// <returns><b>true</b> if the objects are not equal<br /><b>false</b> if they are equal</returns>
		public static bool NotEquals(this object obj, object other) => !obj.Equals(other);
	}

	public static class ListExtensions
	{
		/// <summary>
		/// Performs the <see cref="List{T}.Contains(T)" /> operation but also returns the index of the found element.
		/// </summary>
		/// <typeparam name="T">Generic Type of the <seealso cref="List{T}" /></typeparam>
		/// <param name="list">The list this extension method is being called upon</param>
		/// <param name="item">The item we are attempting to find</param>
		/// <param name="index">The index the item was found at</param>
		/// <returns><b>true</b> and the index of the found element<br/><b>false</b> and -1</returns>
		internal static bool Contains<T>(this List<T> list, T item, out int index)
		{
			if (list.Contains(item))
			{
				index = list.IndexOf(item);

				return true;
			}

			index = -1;

			return false;
		}
	}
}

#if UNITY_ANDROID && !UNITY_EDITOR

namespace ThirdRealm.Utils.Android
{
	public static class AndroidUtils
	{
		public static AndroidJavaObject GetExtras(ref AndroidJavaObject intent)
		{
			AndroidJavaObject extras = null;

			try
			{
				extras = intent.Call<AndroidJavaObject>("getExtras");
			}
			catch (Exception ex)
			{
				DebugLogger.Log("[3RC][ApplicationManager]: Exception occurred while getting extras: " + ex.Message);
			}

			return extras;
		}

		public static string GetProperty(ref AndroidJavaObject ajo, string prop_name)
		{
			string s = string.Empty;

			try
			{
				s = ajo.Call<string>("getString", prop_name);
			}
			catch (Exception ex)
			{
				DebugLogger.Log("[3RC][ApplicationManager]: Exception occurred when getting string value " + prop_name + " | " + ex.Message);
			}

			return s;
		}
	}
}

#endif // UNITY_ANDROID