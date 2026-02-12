#include <bits/stdc++.h>
using namespace std; 

// Given an array of positive integers and target sum K .Print all subsets whose elements sum to exactly K .
// Same include/exclude pattern but now we track the current sum . When we reach the end,we check if currentsum == k. 

void subsetSum(int arr[],int n,int index,int currentSubset[],int currentSize,int currentSum,int target) {

    // If we have processed all elements 


    if (index == n) {
        if (currentSum == target ) {
            cout<<"{";
            for(int i =0;i<currentSize;++i) {

                cout<<currentSubset[i]<< " ";

            
            }
            cout<<"}\n";
        }
        return;
    }

    // Exclude current element 

    subsetSum (arr,n,index+1,currentSubset,currentSize,currentSum,target);



    // Include current elements (only if adding doesnt exceed target ? Not necessary but can prune to improve the permance )


    if(currentSum + arr[index] <=target ) {
        currentSubset[currentSize] = arr[index];

        subsetSum(arr,n,index+1, currentSubset,currentSize+1, currentSum + arr[index],target);
    }

    };

    int main () {
        int arr[] = {2,4,6,10};
        int n = 4;
        int target = 16;
        int subset[100];
        subsetSum(arr,n,0,subset,0,0,target);
        return 0;

    }
