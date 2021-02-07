 class insertion_sort { 
	
	void sort(int arr[]) 
	{ 
		int num = arr.length; 
		for (int i = 1; i < num; ++i) { 
			int m = arr[i]; 
			int j = i - 1; 

			while (j >= 0 && arr[j] > m) { 
				arr[j + 1] = arr[j]; 
				j = j - 1; 
			} 
			arr[j + 1] = m; 
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
		int arr[] = {3,60,35,2,45,320,5}; 

		insertion_sort ob = new insertion_sort(); 
		ob.sort(arr); 

		printArray(arr); 
	} 
}
