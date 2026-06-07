#include <bits/stdc++.h>
using namespace std;
int main () {
    vector<int>arr = {10,2,2,3,2};
    int n = arr.size();
    map<int, int > frq;
    for(int i =0;i<n;i++){
        int x = arr[i];
        frq[x] = frq[x]+1; 
    }
    for (auto x : frq) {
        cout<<x.first<<" "<<x.second<<endl;
    }

    map <int ,int> f;
    f[1] = 10;
    f[2] = 20;
    // printing it 
    for (auto x : f) {
        cout<<x.first<<" "<<x.second<<endl;
    }
}