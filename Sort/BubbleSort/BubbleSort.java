import java.util.Arrays;

class BubbleSort {

	public static void bubbleSort(int arr[]) {
		for (int k = 0; k < arr.length - 1; k++) {
			for (int i = 0; i < arr.length - 1 - k; i++) {
				if (arr[i] > arr[i + 1]) {
					int temp = arr[i];
					arr[i] = arr[i+1];
					arr[i+1] = temp;
				}
			}
		}
	}

	public static void main(String[] args) {
		int arr[] = { 31, 6, 15, 1, -12, 10, 20 };

		bubbleSort(arr);

		System.out.println(Arrays.toString(arr));
	}
}