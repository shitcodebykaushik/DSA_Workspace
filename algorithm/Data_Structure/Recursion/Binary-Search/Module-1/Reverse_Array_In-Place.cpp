// IN place means the modification of the original array no extra array .
#include <iostream>
using namespace std;

void reverseArray(int arr[],int start,int end) {
    if (start >=end) {
        return;
    }
    // Swap 
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    // Recurse on inner segement 

    reverseArray(arr,start+1,end-1);

};

// Wrapper 

void reverse (int arr[],int n) {
    reverseArray(arr,0,n-1);
}

void printArray (int arr[],int n) {
for (int i = 0;i<n; ++i) {
    cout<<arr[i];
    if(i<n-1)cout<<", ";
}
cout<<" ] ";
};

int main () {
    int arr[] = {1,2,4,6};
    cout<<"Oroginal ";
    printArray(arr,4);
    cout<<"Reverse one ";
    reverse(arr,4);
    printArray(arr,4);
}


/* Rotat array left by K AND chek if palindrone and reverse using the length only without two indices */
