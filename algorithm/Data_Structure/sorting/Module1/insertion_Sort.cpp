#include <bits/stdc++.h>
using namespace std; 

void recursiveInsert(int arr[],int n,int key) {
    if(n==0 || arr[n-1]<=key) {
        arr[n] = key;
        return;
    }


    arr[n] = arr[n-1]; // shift right 
    recursiveInsert(arr,n-1,key);
};

// Insert arr[n-1] into sorted arr[0..n-2] using recursiveInsert 

void insertrecursive(int arr[],int n) {
    int key = arr[n-1];
    recursiveInsert(arr,n-1,key);

}
void insertionSortRecursive(int arr[],int n) {
    if(n<=1){
        return;
    }
    insertionSortRecursive(arr,n-1);
    insertrecursive(arr,n);
};
int main () {
    int arr[4] = {3,6,4,7};
     cout<<"Before insertion sort :"<<endl;
    for(int i =0;i<=4;i++) {
        cout<<arr[i]<<",";
    };
    cout<<endl;
    insertionSortRecursive(arr,4);
    cout<<"After insertion sort :"<<endl;
    for(int i =0;i<=4;i++) {
        cout<<arr[i]<<",";
    };
}