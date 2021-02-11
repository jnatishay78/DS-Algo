#include<stdio.h>  
void swap(int *x, int *y) 
{ 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
} 

int partition (int a[], int l, int h) 
{ 
	int pivot = a[h]; 
	int i = (l - 1); 

	for (int j = l ; j <= h- 1; j++) 
	{ 
		if (a[j] < pivot) 
		{ 
			i++;
			swap(&a[i], &a[j]); 
		} 
	} 
	swap(&a[i + 1], &a[h]); 
	return (i + 1); 
} 

void quickSort(int a[], int l, int h) 
{ 
	if (l < h) 
	{ 
		int pi = partition(a, l, h); 

		quickSort(a, l, pi - 1); 
		quickSort(a, pi + 1, h); 
	} 
} 

void printArray(int a[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", a[i]); 
	printf("\n"); 
} 

int main() 
{ 
	int a[] = { 3, 60, 35, 2, 45, 320, 5 }; 
	int num = sizeof(a)/sizeof(a[0]); 
	quickSort(a, 0, num-1); 
	printf("Sorted array: \n"); 
	printArray(a, num); 
	return 0; 
} 

