#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n, bool printVals) {
	for (int k = 0; k < n - 1; k++) {
		for (int i = 0; i < n - 1 - k; i++) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
	
	if(printVals) {
		for (int i = 0; i < n; i++) {
			printf("%d ", arr[i]);
		}
	}
}

int main(void){
	int arr[] = { 31, 6, 15, 1, -12, 10, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bool printVals = true;
	
	bubbleSort(arr, n, printVals);

	return 0;
}