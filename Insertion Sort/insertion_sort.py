def insertionSort(arr): 
 
	for i in range(1, len(arr)): 
		m = arr[i] 
		j = i-1
		while j >= 0 and m < arr[j] : 
				arr[j + 1] = arr[j] 
				j -= 1
		arr[j + 1] = m 
 
arr = [ 21, 12, 23, 15, 5 ] 
insertionSort(arr) 
for i in range(len(arr)): 
	print ("% d" % arr[i]) 
 
