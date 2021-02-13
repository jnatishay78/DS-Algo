class quick_sort 
{ 
	int partition(int a[], int l, int h) 
	{ 
		int pivot = a[h]; 
		int i = (l-1); 
		for (int j=l; j<h; j++) 
		{  
			if (a[j] < pivot) 
			{ 
				i++; 
				int temp = a[i]; 
				a[i] = a[j]; 
				a[j] = temp; 
			} 
		} 
		int temp = a[i+1]; 
		a[i+1] = a[h]; 
		a[h] = temp; 

		return i+1; 
	} 

	void sort(int a[], int l, int h) 
	{ 
		if (l < h) 
		{ 
			int pi = partition(a, l, h); 
			sort(a, l, pi-1); 
			sort(a, pi+1, h); 
		} 
	} 

	static void printArray(int a[]) 
	{ 
		int num = a.length; 
		for (int i=0; i<num; ++i) 
			System.out.print(a[i]+" "); 
		System.out.println(); 
	} 

	public static void main(String args[]) 
	{ 
		int a[] = { 3, 60, 35, 2, 45, 320, 5 }; 
		int num = a.length; 

		quick_sort qs = new quick_sort(); 
		qs.sort(a, 0, num-1); 

		System.out.println("sorted array"); 
		printArray(a); 
	} 
}