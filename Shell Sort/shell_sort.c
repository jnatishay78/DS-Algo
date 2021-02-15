#include <stdio.h>
void shellSort(int a[], int num) {
  for (int interval = num / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < num; i += 1) {
      int temp = a[i];
      int j;
      for (j = i; j >= interval && a[j - interval] > temp; j -= interval) {
        a[j] = a[j - interval];
      }
      a[j] = temp;
    }
  }
}

void printArray(int a[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", a[i]);
  }
  printf("\n");
}

int main() {
  int a[] = { 3, 60, 35, 2, 45, 320, 5 };
  int size = sizeof(a) / sizeof(a[0]);
  shellSort(a, size);
  printf("Sorted array: \n");
  printArray(a, size);
}