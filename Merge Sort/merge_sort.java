class merge_sort 
{
	void merge(int arr[], int t, int m, int r)
	{

		int n1 = m - t + 1;
		int n2 = r - m;
		int L[] = new int[n1];
		int R[] = new int[n2];

		for (int i = 0; i < n1; ++i)
			L[i] = arr[t + i];
		for (int j = 0; j < n2; ++j)
			R[j] = arr[m + 1 + j];

		int i = 0, j = 0;
		int k = t;
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

		while (j < n2) {
			arr[k] = R[j];
			j++;
			k++;
		}
	}

	void sort(int arr[], int t, int r)
	{
		if (t < r) {
			int m =t+ (r-t)/2;
			sort(arr, t, m);
			sort(arr, m + 1, r);
			merge(arr, t, m, r);
		}
	}

	static void printArray(int arr[])
	{
		int num = arr.length;
		for (int i = 0; i < num; ++i)
			System.out.print(arr[i] + " ");
		System.out.println();
	}

	public static void main(String args[])
	{
		int arr[] = { 3, 60, 35, 2, 45, 320, 5 };

		System.out.println("Given Array");
		printArray(arr);

		merge_sort ob = new merge_sort();
		ob.sort(arr, 0, arr.length - 1);

		System.out.println("\nSorted array");
		printArray(arr);
	}
}

