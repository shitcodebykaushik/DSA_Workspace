// Lower is the first position where a number could be inserted without breaking the sorted order .

#include <bits/stdc++.h>
using namespace std;

int lowerBoundRecursive(int arr[],int left,int right,int key) {

   if(left>right) {
    return left;  // insertion point 
   }



   int mid = left + (right - left ) / 2;
   if(arr[mid] >= key) {
    return lowerBoundRecursive(arr,left,mid-1,key);
   }else {
    // look in right half 

    return lowerBoundRecursive (arr,mid+1,right,key);
   }
};

// Recurive upper bound:- first index i in [left,right] with arr[i] > key 

int upperBoundRecursive(int arr[],int left,int right,int key ) {
    if (left > right ) {
        return left;
    }
    int mid = left + (right-left) /2;
    if(arr[mid] > key ) {
        return upperBoundRecursive(arr,left,mid-1,key);

    }else {
        return upperBoundRecursive(arr,mid+1,right,key);
    }
};


// 