import java.util.Arrays;

class SelectionSort {

	public static void selectionSort(int[] arr) {
		for (int i = 0; i < arr.length - 1; i++) {
			int min = i;

			for (int j = i + 1; j < arr.length; j++) {
				if (arr[j] < arr[min]) {
					min = j;
				}
			}

			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}

	public static void main(String[] args) {
		int arr[] = { 3, 1, 5, 9, 15, 1, -4 };

		selectionSort(arr);

		System.out.println(Arrays.toString(arr));
	}
}