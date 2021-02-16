import java.util.Arrays;
public class shell_sort {
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

  // Driver code
  public static void main(String args[]) {
  int a[] = { 3, 60, 35, 2, 45, 320, 5 };
  int size = a.length;
  shell_sort ss = new shell_sort();
  ss.shellSort(a,size);
  System.out.println("Sorted Array in Ascending Order: ");
  System.out.println(Arrays.toString(a));
  }
}