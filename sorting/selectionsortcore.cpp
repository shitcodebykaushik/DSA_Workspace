#include <bits/stdc++.h>
using namespace std ;
void selection(int arr[],int n){
 for (int i = 0; i<n;i++){
    int mini = i;
    for (int j = i+1;j<n;j++) {
        if(arr[j]<arr[mini]){
            mini = j ;
        }
    }
    int temp = arr[mini];
    arr[mini]=arr[i];
    arr[i] = temp;
 }
}
 void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main () {
    int arr [] = {10,2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);  // Here we are calculating the total number of the element  by diving the total size of the array by the single element .
    cout<<"The Elements present in the array are \n";
    for (int i = 0; i<n;i++){
     cout<<arr[i];
    }
    selection(arr,n);
    printArray(arr,n);
    cout<<endl;
}