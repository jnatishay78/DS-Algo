#include <iostream>

using namespace std;

int main()
{
    int num,a,b;
    cin>>num;
    int arr[num];
    for (int i=0;i<num;i++){
        cin>>arr[i];
    }
    // Loop for repeating step 1 and step 2 (n-1) times
    for (int i=0;i<(num-1);i++){
        // This loop comprises of step 1 and step2
        for (int j=0;j<(num-1);j++){
            // Step 1
            a = arr[j];
            b = arr[j+1];
            // Step 2
            if (a>b){
                arr[j+1]=a;
                arr[j]=b;
            }
        }
    }
    // Loop for printing the elements of the array with spaces in between
    for (int i=0;i<(num-1);i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[num-1];
    return 0;
}