#include <bits/stdc++.h>
using namespace std;

int arraySum(int arr[],int n) {
    // Base case: Empty array contributes 0  
    if (n == 0) {
        return   0;

    };
    // Recursive case: first element + sum of the rest 
    int sumOFrest = arraySum (arr+1,n-1);
    return arr[0] + sumOFrest;
};


int main () {
    int arr[] = {2,3,6} ;
    cout<<"Sum " <<arraySum(arr,3)<<endl;

    // Testing single element 

    int arr2[]= {458968};
    cout<<"Sum "<<arraySum(arr2,1)<<endl;
    

    // Testing for the empty elements 

    int arr3[] = {};
    cout<<"Sum " <<arraySum(arr3,0);


    // Testing for the negative 

    int arr4[] = {-89,-89};
    cout<<"Sum "<<arraySum(arr4,2);

};


// Time complexity -> O(n) -> one addition per element .
// Space complexity -> o(n) -> call stack depth  = n+1 ;

// Variations (Trains your reflex )
// Summ of even number 
// Product of all elements 
// Sum of abosulte values 
