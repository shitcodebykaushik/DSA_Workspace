#include <bits/stdc++.h>
using namespace std;

// Determine wheather an integer array is sorted in non-decreasing order .
bool isSorted (int arr[],int n) {
    if (n<=1) {
        return true ;
    }

    // If first two elements are out of order not sorted 

    if (arr[0]>arr[1]) {
        return false;
    }
    // Recursively check the rest (starting from index 1 ) 

    return isSorted (arr+1, n-1);
}

int main ()  {

    int arr[] = {1,2,30,4};
    cout<<isSorted(arr,4);




}