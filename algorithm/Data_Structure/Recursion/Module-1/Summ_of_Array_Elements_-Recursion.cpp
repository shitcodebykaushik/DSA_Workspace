#include <bits/stdc++.h>
using namespace std;

int arraySum(int arr[],int n) {
    if (n==0) {
        return 0;
    }
    // Recursive case : first element + sum of the rest 

    int sumofRest = arraySum(arr +1, n-1); //arr+1 shifts pointer 
    return arr[0] + sumofRest;
}

int main () {
  int a[] = {10,20,30,40};
  int sum = arraySum(a,4);
  cout<<sum<<endl;
}

// Array sum is trival,but the pattern of processing a subarray recursively is used in many divied and conquer algorithm . 

