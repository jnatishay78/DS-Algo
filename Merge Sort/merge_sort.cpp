#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];

	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	int i = 0;
	int j = 0;
	int k = l;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of
	// R[], if there are any
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[],int t,int r){
	if(t>=r){
		return;
	}
	int m =t + (r-t)/2;
	mergeSort(arr,t,m);
	mergeSort(arr,m+1,r);
	merge(arr,t,m,r);
}

void printArray(int S[], int s)
{
	for (int i = 0; i < s; i++)
		cout << S[i] << " ";
}

int main()
{
	int arr[] = { 3, 60, 35, 2, 45, 320, 5 };
	int arr_s = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, arr_s);

	mergeSort(arr, 0, arr_s - 1);

	cout << "\nSorted array is \n";
	printArray(arr, arr_s);
	return 0;
}
