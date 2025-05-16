#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr1[100] = {2, 4, 6}; // First array
    int size1 = 3;

    int arr2[100] = {8, 10, 12, 14}; // Second array
    int size2 = 4;

    // Update the code below to solve the problem
    
    int merged [size1+size2];  // This is the new arry .
    for(int i =0;i<size1;i++){
        merged[i]=arr1[i];
    }
    // Second loop for copying the Second part of the array .
    for(int i =0;i<size1+size2;i++){
        merged[size1+i]=arr2[i];
    }
    
    // Print the merged array
    for(int i=0 ; i<size1+size2 ; i++){
        cout<<merged[i]<<" ";
    }

    return 0;
}