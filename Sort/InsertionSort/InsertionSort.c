#include <stdio.h>
#include <stdbool.h>

void insertionSort(int arr[], int n, bool printVals) {

	for (int i = 1; i < n; i++) {
		int value = arr[i];
		int j = i;
		
		while (j > 0 && arr[j - 1] > value) 
		{
			arr[j] = arr[j - 1];
			j--;
		}

		arr[j] = value;
	}
	
	if(printVals) {
		for (int i = 1; i < n; i++) {
			printf("%d", arr[i]);
		}
	}
}

int main(void)
{
	int arr[] = { 3, 8, 5, 4, 1, 9, -2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bool printVals = true;
	
	insertionSort(arr, n, printVals);

	return 0;
}