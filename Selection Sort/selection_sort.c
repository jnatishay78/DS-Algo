#include <stdio.h> 
void swap(int *x, int *y) 
{ 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
} 

void selectionSort(int arr[], int num) 
{ 
	int i, j, min_idx;  
	for (i = 0; i < num-1; i++) 
	{ 
		min_idx = i; 
		for (j = i+1; j < num; j++) 
		if (arr[j] < arr[min_idx]) 
			min_idx = j; 
		swap(&arr[min_idx], &arr[i]); 
	} 
} 

void printArray(int arr[], int s) 
{ 
	int i; 
	for (i=0; i < s; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

int main() 
{ 
	int arr[] = {64, 25, 12, 22, 11}; 
	int num = sizeof(arr)/sizeof(arr[0]); 
	selectionSort(arr, num); 
	printf("Sorted array: \n"); 
	printArray(arr, num); 
	return 0; 
} 
