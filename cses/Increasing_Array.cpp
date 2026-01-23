// You are give an array of n integers. You want to modify the array so that it is incresin i.e every element is at least as large as the previous one .
// On each move you may increasre the value of any element by one . What is the minimum number of moves required .
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long moves=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            moves+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout<<moves<<endl;
    return 0;
}