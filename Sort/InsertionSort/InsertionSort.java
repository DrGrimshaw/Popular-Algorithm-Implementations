import java.util.Arrays;

class InsertionSort
{
	public static void insertionSort(int[] arr)
	{
		for (int i = 1; i < arr.length; i++)
		{
			int value = arr[i];
			int j = i;

			while (j > 0 && arr[j - 1] > value)
			{
				arr[j] = arr[j - 1];
				j--;
			}

			arr[j] = value;
		}
	}

	public static void main(String[] args)
	{
		int[] arr = { 13, 4, 7, 2, -1, 5, 8 };

		insertionSort(arr);

		System.out.println(Arrays.toString(arr));
	}
}