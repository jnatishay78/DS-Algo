public class heap_sort {
  
    public void sort(int a[]) {
      int num = a.length;
  
      for (int i = num / 2 - 1; i >= 0; i--) {
        heapify(a, num, i);
      }
  
      for (int i = num - 1; i >= 0; i--) {
        int tmp = a[0];
        a[0] = a[i];
        a[i] = tmp;
  
        heapify(a, i, 0);
      }
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
        int swap = a[i];
        a[i] = a[max];
        a[max] = swap;
  
        heapify(a, num, max);
      }
    }
  
    static void display(int a[]) {
      int num = a.length;
      for (int i = 0; i < num; ++i)
        System.out.print(a[i] + " ");
      System.out.println();
    }
  
    public static void main(String args[]) {
      int a[] = { 3, 60, 35, 2, 45, 320, 5 };
  
      heap_sort hs = new heap_sort();
      System.out.println("Unsorted array:");
      display(a);
	  hs.sort(a);
  
      System.out.println("\nSorted array:");
      display(a);
    }
  }
