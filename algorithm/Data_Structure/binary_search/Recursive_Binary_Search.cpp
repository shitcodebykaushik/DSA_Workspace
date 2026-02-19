#include <bits/stdc++.h>
using namespace std;

int binarySearchRecursive(int arr[], int left, int right, int key) {
    // Base case: Range exhausted
    if (left > right) {
        return -1;
    }

    // Divide: Find middle index
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == key) {
        return mid;
    }
    
    if (key < arr[mid]) {
        // Search left half
        return binarySearchRecursive(arr, left, mid - 1, key);
    } 
    else {
        // Search right half
        return binarySearchRecursive(arr, mid + 1, right, key);
    }
}

// Wrapper function (Fixed typo: birnarSearch -> binarySearch)
int binarySearch(int arr[], int n, int key) {
    return binarySearchRecursive(arr, 0, n - 1, key);
}

void printResult(int arr[], int n, int key) {
    int idx = binarySearch(arr, n, key);
    if (idx == -1) {
        // Added a space before "not found" for better output formatting
        cout << "Key " << key << " not found.\n";
    } else {
        cout << "Key " << key << " found at index " << idx << ".\n";
    }
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printResult(arr, n, 23);
    


    int empty[] = {};
    printResult(empty,0,42
    );
    



    return 0; // Standard practice to return 0
}