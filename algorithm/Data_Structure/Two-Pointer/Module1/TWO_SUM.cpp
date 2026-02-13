#include <bits/stdc++.h>
using namespace std;  

// Two pointers Fundamnetal goal is the two core movement patterns -> Opposite direction (left and right  meeting )
// And the same direction (sliding window )
// Here the array is sorted 
int twoSumSorted (int arr[],int n,int target ) {
    int i = 0,j=n-1;
    while(i<j) {
        int sum = arr[i] + arr[j];
        if (sum == target )return 1;
        if (sum<target) ++i;
        else --j;
    } 
    return 0;
};
int main () {

int arr[] = {4,5,6,10};
int n = 4;
int target = 11;
int found = twoSumSorted(arr,n,target);

}