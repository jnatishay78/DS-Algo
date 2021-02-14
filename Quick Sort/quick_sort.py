def partition(a,l,h): 
	i = ( l-1 )		 
	pivot = a[h]	  

	for j in range(l , h): 
		if a[j] < pivot: 
			i = i+1
			a[i],a[j] = a[j],a[i] 

	a[i+1],a[h] = a[h],a[i+1] 
	return ( i+1 ) 

def quickSort(a,l,h): 
	if l < h: 

		pi = partition(a,l,h) 
		quickSort(a, l, pi-1) 
		quickSort(a, pi+1, h) 

a = [ 3, 60, 35, 2, 45, 320, 5 ] 
num = len(a) 
quickSort(a,0,num-1) 
print ("Sorted array is:") 
for i in range(num): 
	print ("%d" %a[i]), 

