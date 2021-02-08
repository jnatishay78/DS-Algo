import sys 
S = [64, 25, 12, 22, 11] 

for i in range(len(S)): 
	
	# Find the minimum element in remaining 
	# unsorted array 
	min_idx = i 
	for j in range(i+1, len(S)): 
		if S[min_idx] > S[j]: 
			min_idx = j 
	S[i], S[min_idx] = S[min_idx], S[i] 

print ("Sorted array") 
for i in range(len(S)): 
	print("%d" %S[i]), 
S