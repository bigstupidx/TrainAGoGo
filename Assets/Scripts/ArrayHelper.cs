using UnityEngine;

public static class ArrayHelper
{
	public static int[] RandomIndices(this int n)
	{
		int[] a = new int[n];

		for (int i = 0; i < n; i++)
		{
			a[i] = i;
		}

		a.Swap();

		return a;
	}

	public static void Swap(this int[] a)
	{
		int length = a.Length;
		int tmp;

		if (length < 2)
		{
			return;
		}

		if (length == 2)
		{
			if (Random.value > 0.5f)
			{
				tmp = a[0];
				a[0] = a[1];
				a[1] = tmp;
			}

			return;
		}

		for (int i = 0; i < length; i++)
		{
			int j = Random.Range(0, length);

			if (i != j)
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
