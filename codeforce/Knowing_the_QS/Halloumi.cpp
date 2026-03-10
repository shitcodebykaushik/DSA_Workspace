#include <bits/stdc++.h>
using namespace std;
bool solve (vector<int>&a, int k) {
    int n = a.size();
    if(k==1){
        vector<int>copy = a;
        sort(copy.begin(), copy.end());
        for(int i =0; i<n; i++){
            if(copy[i]!=a[i]){
                return false;
            }
        }
    }
        return true;
    }


int main () {
int t;
cin>>t;
for(int zz=0;zz<t;zz++){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i =0; i<n; i++){
        cin>>a[i];
}
    if(solve(a,k)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
}