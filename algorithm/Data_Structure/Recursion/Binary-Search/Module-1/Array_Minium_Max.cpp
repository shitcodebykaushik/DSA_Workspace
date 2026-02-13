#include <bits/stdc++.h>
using namespace std;

// Precondition : n >= 1 (if n==0 return INT_MAX as sentinel) 

int arrayMin(int arr[],int n) {
    if (n== 0) {
        return INT_MAX;
    };
    if(n==1) {
        return arr[0];
    };
    int minOfRest = arrayMin(arr+1,n-1);
    return (arr[0]<minOfRest) ? arr[0] : minOfRest;
};

int arrMax(int arr[],int n) {
    if (n==0) return INT_MIN;
    if (n ==1 ) return arr[0];
    int maxOFrest = arrMax(arr+1,n-1);
    return (arr[0]>maxOFrest ) ? arr[0] : maxOFrest;

};

int main () {
    int arr[6] = {1,6,5,4,5,6};
    cout<< "The max element is :"<<arrMax(arr,7)<<endl;
    cout<<"The minium element is : "<<arrayMin(arr,6);
};


// Task assigned 
// Second smallest 
// Index of minium 
// Minium absolute 

// T(o) -> Once comparison per elements 
// Space -> O(n);
