#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int low, int k, int r)
{
	int i, j, k;
	int n1 = k - low + 1;
	int n2 = r - k;
	int L[n1], R[n2];
	for (i = 0; i < n1; i++)
		L[i] = arr[low + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[k + 1 + j];

	i = 0; 
	j = 0; 
	key = l; 
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[key] = L[i];
			i++;
		}
		else {
			arr[key] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (l < r) {
        
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int main()
{
	int arr[] = { 3,60,35,2,45,320,5 };
	int arr_s = sizeof(arr) / sizeof(arr[0]);

	printf("Given array is \n");
	printArray(arr, arr_s);

	mergeSort(arr, 0, arr_s - 1);

	printf("\nSorted array is \n");
	printArray(arr, arr_s);
	return 0;
}
