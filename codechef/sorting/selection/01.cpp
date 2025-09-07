#include <bits/stdc++.h>
using namespace std;
int main () {
    int arr[6]= {8,4,7,1,19,2};
    cout<<"The unsorted array is "<<endl;
    for(int i= 0;i<6;i++){
        cout<<arr[i]<< " ";
    };
    cout<<endl;
    // Loop for the sorting 
    for(int i=0;i<5;i++){   // here is the core where we are definig the range
     int min = i;
     for(int j=i;j<6;j++){  // second core where we are defingin the range 
        if(arr[j]<arr[min]){
            min=j;
        }
     }
     // swapping is happing here 
     int temp = arr[min];
     arr[min] = arr[i];
     arr[i]= temp;
    };
    cout<<"The sorted array is : "<<endl;
    // Printing the sorted array 
    for(int i=0;i<6;i++){
        cout<<arr[i]<< " ";
    }
}