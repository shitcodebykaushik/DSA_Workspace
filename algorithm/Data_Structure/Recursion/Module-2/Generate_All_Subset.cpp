#include <bits/stdc++.h>
using namespace std; 
// Given an array of distinct integers ,generate all possible subsets (the power sets) order doesnt not matter 
// Recursive insight: 
// For each element you have two choices: include it in the current subset or exclude it . Recurse on the remaining elements . WHen u reach the end of the array print(or store) the current subset .




void printSubsets(int arr[],int n, int currentIndex,int currentSubset[],int currentSize) {
    //Base case: We have considere all elements 

    if (currentIndex ==n) {
        cout<<"{" ; 

        for(int i = 0;i<currentSize;++i) {
            cout<<currentSubset[i]<< " ";
        }
        cout<<"}\n";
        return ;
    };

    // Exclude the current element - do not add to subset 

    printSubsets(arr,n,currentIndex+1,currentSubset,currentSize);


    // Include the current element - add to subset and recurse 

    currentSubset[currentSize] = arr[currentIndex];
    printSubsets(arr,n,currentIndex+1,currentSubset,currentSize+1);
}

int main ()  {

int arr[] = {1,2,3};
int n = 3;
int subset[100];
printSubsets(arr,n,0,subset,0);
return  0;
}