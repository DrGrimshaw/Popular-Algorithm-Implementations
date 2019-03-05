#include <stdio.h>
#include <stdbool.h>

void selectionSort(int arr[], int n, bool printVals) {
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		
		for (int j = i + 1; j < n; j++)	{
			if (arr[j] < arr[min])
				min = j;
		}

		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	
	if(printVals) {
		for (int i = 0; i < n; i++) {
			printf("%d ", arr[i]);
		}
	}
}

int main(void) {
	int arr[] = { 3, 1, 5, 9, 15, 1, -4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bool printVals = true;
	
	selectionSort(arr, n, printVals);

	return 0;
}