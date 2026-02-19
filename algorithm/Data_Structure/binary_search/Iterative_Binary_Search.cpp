#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key) {
    int left =0;
    int right = n-1;
    while(left<=right) {
        int mid = left + (right -left) / 2;  // avoid overflow 
        if(arr[mid]==key) {
            return mid;
        }else if (key <arr[mid]) {
            return mid;
        }else if (key < arr[mid]) {
            right = mid-1;
        }else  {
            left = mid+1;
        }
    }
    return -1;   // not found 

}
// Wrapper (same name for consitency )
int binarySearch1(int arr[],int n,int key) {
    return binarySearch(arr,n,key);
};
void printResult(int arr[], int n, int key) {
    int idx = binarySearch(arr, n, key);
    if (idx == -1)
        std::cout << "Key " << key << " not found.\n";
    else
        std::cout << "Key " << key << " found at index " << idx << ".\n";
};
int main () {
int arr[] = { 1,2,3,5};
int n = sizeof(arr)/sizeof(arr[0]);
printResult(arr,n,5);
return 0;
};


// Time complexity 
// Each step halves the search space O(log n) .
// Best case key ar mid -> o(1);
// Space complexity 
// Interative: O(1) => Ony a few variables 
// Recursive O(log n) => stack depth (due to recursion) .
