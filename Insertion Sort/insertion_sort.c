// C program for insertion sort 
#include <math.h> 
#include <stdio.h> 

void insertionSort(int arr[], int num) 
{ 
	int i, k, j; 
	for (i = 1; i < num; i++) { 
		k = arr[i]; 
		j = i - 1; 

		while (j >= 0 && arr[j] > k) { 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = k; 
	} 
} 

void printArray(int arr[], int num) 
{ 
	int i; 
	for (i = 0; i < num; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

int main() 
{ 
	int arr[] = { 21, 12, 23, 15, 5 }; 
	int num = sizeof(arr) / sizeof(arr[0]); 

	insertionSort(arr, num); 
	printArray(arr, num); 

	return 0; 
} 
