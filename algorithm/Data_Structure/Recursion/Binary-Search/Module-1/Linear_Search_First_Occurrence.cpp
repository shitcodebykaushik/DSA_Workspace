#include <bits/stdc++.h>
using namespace std;
// Goal is find the target element from the array with the help of the recursion .
int linearSearch(int arr[],int n,int key) {
    if(n==0) {
        return -1;
    }
    if(arr[0]==key) {
        return 0;

    }

    int indexInRest = linearSearch(arr+1,n-1,key);
    if(indexInRest == -1) {
        return -1;
    }
    return indexInRest+1;
}

int main () {
    int arr[4] = {1,7,5,9};
    cout<<"The target is " <<linearSearch(arr,4,7);
};

// Time complexity O(n) 
// Space complexity o(n) 


// All indices
// Count occurences 
// Last occurences 