#include <iostream>
using namespace std;

bool isSorted(int arr[],int n) {
    if(n<=1) {
        return 1;
    }if (arr[0]>arr[1]) {
        return false;
    }return isSorted (arr+1,n-1);
};
int main () {
    int arr1[3] = {10,5,6};
    cout<<isSorted(arr1,3);
};

/*Check if sorted in descending order.
Check if sorted but with one allowed swap – later.
Find first unsorted pair.*/

