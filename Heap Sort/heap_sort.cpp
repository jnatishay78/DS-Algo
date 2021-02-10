#include <iostream>
  using namespace std;
  
  void heapify(int a[], int num, int i) {
    int max = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;
  
    if (leftChild < num && a[leftChild] > a[max])
      max = leftChild;
  
    if (rightChild < num && a[rightChild] > a[max])
      max = rightChild;
  
    if (max != i) {
      swap(a[i], a[max]);
      
      heapify(a, num, max);
    }
  }
  
  void heapSort(int a[], int num) {
    for (int i = num / 2 - 1; i >= 0; i--)
      heapify(a, num, i);
  
    for (int i = num - 1; i >= 0; i--) {
      swap(a[0], a[i]);
      heapify(a, i, 0);
    }
  }
  
  void display(int a[], int num) {
    for (int i = 0; i < num; ++i)
      cout << a[i] << " ";
    cout << "\n";
  }
  
  int main() {
    int a[] = {11, 34, 9, 5, 16, 10};
    int num = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted array:\n";
    display(a, num);
    heapSort(a, num);
  
    cout << "Sorted array:\n";
    display(a, num);
  }
