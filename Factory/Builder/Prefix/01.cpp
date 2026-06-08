#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<int>arr = {1,2,3};
    int n = arr.size();
    vector<int>prefix(n);

    for(int i = 1;i<n;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    for (int x:prefix) {
        cout<<x<<" ";
    }

}