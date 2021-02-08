class selection_sort 
{ 
	void sort(int arr[]) 
	{ 
		int num = arr.length; 

		for (int i = 0; i < num-1; i++) 
		{ 

			int min_idx = i; 
			for (int j = i+1; j < num; j++) 
				if (arr[j] < arr[min_idx]) 
					min_idx = j; 

			int temp = arr[min_idx]; 
			arr[min_idx] = arr[i]; 
			arr[i] = temp; 
		} 
	} 

	void printArray(int arr[]) 
	{ 
		int num = arr.length; 
		for (int i=0; i<num; ++i) 
			System.out.print(arr[i]+" "); 
		System.out.println(); 
	} 

	public static void main(String args[]) 
	{ 
		selection_sort ob = new selection_sort(); 
		int arr[] = {64,25,12,22,11}; 
		ob.sort(arr); 
		System.out.println("Sorted array"); 
		ob.printArray(arr); 
	} 
} 

