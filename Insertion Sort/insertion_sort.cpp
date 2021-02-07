 #include <iostream.h> 
using namespace std; 

void insertionSort(int arr[], int num) 
{ 
	int i, m, j; 
	for (i = 1; i < num; i++) 
	{ 
		m = arr[i]; 
		j = i - 1; 

		while (j >= 0 && arr[j] > m) 
		{ 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = m; 
	} 
} 

void printArray(int arr[], int num) 
{ 
	int i; 
	for (i = 0; i < num; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

int main() 
{ 
	int arr[] = { 21, 12, 23, 15, 5 }; 
	int num = sizeof(arr) / sizeof(arr[0]); 

	insertionSort(arr, num); 
	printArray(arr, num); 

	return 0; 
} 
