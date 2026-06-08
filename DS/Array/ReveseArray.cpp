// Reverse an Array
#include <bits/stdc++.h>
using namespace std;
   vector<int> reverseArray(vector<int>arr) {
        int n = arr.size();
        for(int i = 0;i<n;i++){
            arr[i]=arr[n-1-i];
    }
        return arr;
    };
    int main () {
        vector<int>arr = {1,2,3,4,5};
       arr = reverseArray(arr);
        for (int x :arr) {
            cout<<x<<" ";
        }
    }