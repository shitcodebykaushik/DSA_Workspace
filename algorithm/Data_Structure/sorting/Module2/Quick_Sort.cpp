#include <bits/stdc++.h>
using namespace std;

int lomutPartition(int arr[],int left,int right) {
    int pivot = arr[right];
    int i = left -1;

    for (int j = left;j<right;++j){
        if(arr[j] <=pivot) {
            ++i;
            // swap arr[i] and arr[j];
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Place pivot in its correct position 

    int temp = arr[i+1];
    arr[i+1]= arr[right];
    arr[right] = temp;
    return i+1;
}

void quickSortLomuto(int arr[],int left,int right) {
    if(left >= right ) return ;
    int p = lomutPartition(arr,left,right);
    quickSortLomuto(arr,left,p-1);
    quickSortLomuto(arr,p+1,right);

}

// Wrapper 

void quickSort(int arr[],int n) {
    quickSortLomuto(arr,0,n-1);
}

void printArray ( int arr[],int n){
    cout<<" [ " ;
    for(int i =0;i<n;++i) {
        cout<<arr[i];
        if(i<n-1)std::cout<<", ";
    }
    cout<<" ] ";
};

int main ()
 {
    int arr [4] = {8,9,68,7};
    cout<<"Original"<<endl;
    printArray(arr,4);
    cout<<endl;
    cout<<"After sorted "<<endl;
    quickSort(arr,4);
    printArray(arr,4);
 }



