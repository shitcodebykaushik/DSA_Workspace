#include <bits/stdc++.h>
// This is one of the pattern in cp for the sub-array
using namespace std;
int main () {
    vector <int>arr = {1,2,3};
    int n = arr.size();
    for(int l =0;l<n;l++){
        for(int r =l;r<n;r++){
            for(int k=l;k<=r;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
};