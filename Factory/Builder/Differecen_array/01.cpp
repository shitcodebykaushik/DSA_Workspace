// Add 5 to every element in the range [1,3]

#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<int>arr = {1,2,3,4};
    int n = arr.size();
    vector<int>diff(n+1,0);

    int l =1;
    int r = 3;
    int x = 5;
    
    diff[l] += x; // this is the shorthand for the  diff[l] = diff[l] + x; eg diff[2] 
    //
    if (r+1<n) {
        // Here is the doubt that how it works 
        diff[r+1] -= x;
    }

    int current = 0;
    for(int i = 0;i<n;i++){
        current += diff[i];
        arr[i] += current;
    }
    for (int x :arr) {
        cout<<x<<" ";
    }
}