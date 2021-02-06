class bubble_sort {  
    static void bubbleSort(int[] arr) {  
        int num = arr.length;  
        int x = 0;  
         for(int i=0; i < num; i++){  
                 for(int j=1; j < (num-i); j++){  
                          if(arr[j-1] > arr[j]){  
                                 //swap 
                                 x = arr[j-1];  
                                 arr[j-1] = arr[j];  
                                 arr[j] = x;  
                         }  
                          
                 }  
         }  
  
    }  
    public static void main(String[] args) {  
                int arr[] ={3,60,35,2,45,320,5};  
                 
                System.out.println("Array Before Bubble Sort:\n");  	
                
                for(int i=0; i < arr.length; i++){  
                        System.out.print(arr[i] + " ");  
                }  
                System.out.println();  
                  
                bubbleSort(arr);  
                 
                System.out.println("Array After Bubble Sort:\n");  
                for(int i=0; i < arr.length; i++){  
                        System.out.print(arr[i] + " ");  
                }  
   
        }  
}  