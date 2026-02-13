#include <bits/stdc++.h>
using namespace std;

// Merge two sorted subarrays arr[l..m] and arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2]; // temporary arrays
    // Copy data to temp arrays
    for(int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2) {
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    // Copy remaining elements, if any
    while(i < n1)
        arr[k++] = L[i++];
    while(j < n2)
        arr[k++] = R[j++];
}

// Recursive merge sort function
void mergeSortRecursive(int arr[], int l, int r) {
    if(l >= r) return; // base case
    int m = l + (r - l) / 2;
    mergeSortRecursive(arr, l, m);
    mergeSortRecursive(arr, m + 1, r);
    merge(arr, l, m, r);
}

// Wrapper function for convenience
void mergeSort(int arr[], int n) {
    mergeSortRecursive(arr, 0, n - 1);
}

// Print array
void printArray(int arr[], int n) {
    cout << "[";
    for(int i = 0; i < n; i++) {
        cout << arr[i];
        if(i < n - 1) cout << ", ";
    }
    cout << "]";
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original: ";
    printArray(arr, n);
    cout << endl;

    mergeSort(arr, n);

    cout << "Sorted:   ";
    printArray(arr, n);
    cout << endl;

    return 0;
}
