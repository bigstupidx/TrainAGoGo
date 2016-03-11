using UnityEngine;

public class RailManager : SimpleSingleton<RailManager>
{
	/// <summary>
	/// The start.
	/// </summary>
	public float start = 0.0f;

	/// <summary>
	/// The end.
	/// </summary>
	public float end = 10.0f;

	/// <summary>
	/// The rail width.
	/// </summary>
	public float railWidth = 0.5f;

	/// <summary>
	/// The rail space.
	/// </summary>
	public float railSpace = 0.5f;

	/// <summary>
	/// The rail count.
	/// </summary>
	public int railCount = 4;

	public Vector3 GetTrainPosition(int railIndex, bool isUp)
	{
//		Vector3 position = Vector3.zero;
		Vector3 position = new Vector3(225.4f, 3.81f, 195f);

		float width = railCount * (railWidth + railSpace) - railSpace;
		position.x = position.x -width * 0.5f + railWidth * 0.5f + railIndex * (railWidth + railSpace);

		if (isUp)
		{
			position.z += start;
		}
		else
		{
			position.z += end;
		}

		return position;
	}

	void OnDrawGizmos()
	{
		Vector3 center = new Vector3(225.4f, 3.81f, 195f);//Vector3.zero;

		float width = railCount * (railWidth + railSpace) - railSpace;
		float x = center.x - width * 0.5f;
		float minZ = center.z + start;
		float maxZ = center.z + end;

		Vector3 from = new Vector3(x, center.y, minZ);
		Vector3 to   = new Vector3(x, center.y, maxZ);

		Gizmos.color = Color.blue;

		for (int i = 0; i < railCount; i++)
		{
			from.x = to.x = x;
			Gizmos.DrawLine(from, to);

			x += railWidth;

			from.x = to.x = x;
			Gizmos.DrawLine(from, to);

			DrawLines(new Vector3(x - railWidth, center.y, minZ), new Vector3(x, center.y, maxZ));

			x += railSpace;
		}
	}

	void DrawLines(Vector3 bottomLeft, Vector3 topRight)
	{
		Vector3 from = new Vector3(bottomLeft.x, bottomLeft.y, bottomLeft.z + 0.25f);
		Vector3 to   = new Vector3(topRight.x, topRight.y, from.z);

		do
		{
			Gizmos.DrawLine(from, to);

			from.z += 0.5f;
			to.z   = from.z;
		}
		while (from.z < topRight.z);
	}
}
