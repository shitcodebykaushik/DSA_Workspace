#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr [],int n) {
    // Base Cae: array of size 0 or 1 is already sorted - nothing to do 
    if (n<=1) {
        return ;
    };
    // Start from the second elememnt (index 1) as the first element is trivally sorted 
    for (int i = 1;i<n;i++){
        int key = arr[i];
        int j = i-1;

    
    // shifts elements of sorted region that are greate than the key to the right 

    while(j>=0 && arr[j]>key) {
     arr[j + 1] = arr[j];
     --j;
    }

    // Place key at its correct position 
    arr[j+1] = key ;
    }
};
// Helper to print array 
void printArray(int arr[],int n) {
    cout<<" ";
    for(int i =0;i<n;++i){
        cout<<arr[i];
        if(i<n-1){
            cout<<" ,";
        }
        cout<<"  ";
    };
};
int main () {
    int arr[] = {1,8,6,97,8};
    cout<<"The original one is "<<endl;
    printArray(arr,5);
    cout<<endl;
    cout<<"After sorting "<<endl;
    insertionSort(arr,5);
    printArray(arr,5);

};

/*Task is solve these sort only a subarray  and one task is to add counter to measure the number of the shifts performed for a given input */