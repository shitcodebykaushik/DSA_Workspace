#include <bits/stdc++.h>
using namespace std ;
// Find the index of the first occurence of a given `key` in an array. Return -1 if not found .

// Base Cases: Empty array -> -1; first element matched  -> 0 .

int linearSearch (int arr [],int n, int key) {

    // Base Case 
    if(n==0) {
        return -1;
    }
    // If first element matches, return index 0. 

    if(arr[0] == key ) {
        return 0;
    }
    // Search in the rest of the array 
    int indexInRest = linearSearch(arr+1,n-1,key) ;
    
    // If not found in rest propgate  -1 
    if (indexInRest == -1) {

    
    return -1;
    }
    
    return indexInRest + 1;

}

int main () {

int arr[] = {3,5,7,5,9};
cout<<linearSearch (arr,5,9)<<endl;

return 0;
}

// Recurisve linear search is not used in CP (iteration is simpler ) but it traches how to propagate a result and adjust indices .


