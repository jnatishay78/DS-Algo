#include <stdio.h> 
  void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
  }
  
  void heapify(int a[], int num, int i) {
    int max = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;
  
    if (leftChild < num && a[leftChild] > a[max])
      max = leftChild;
  
    if (rightChild < num && a[rightChild] > a[max])
      max = rightChild;
  
    if (max != i) {
      swap(&a[i], &a[max]);
      heapify(a, num, max);
    }
  }
  
  void heapSort(int a[], int num) {
    for (int i = num / 2 - 1; i >= 0; i--)
      heapify(a, num, i);
  
    for (int i = num - 1; i >= 0; i--) {
      swap(&a[0], &a[i]);
      heapify(a, i, 0);
    }
  }
  
  void display(int a[], int num) {
    for (int i = 0; i < num; ++i)
      printf("%d ", a[i]);
    printf("\n");
  }
  
  int main() {
    int a[] = { 3, 60, 35, 2, 45, 320, 5 };
    int num = sizeof(arr) / sizeof(arr[0]);
	
    printf("Unsorted array:\n");
    display(a, num);
    heapSort(a, num);
  
    printf("Sorted array:\n");
    display(a, num);
  }