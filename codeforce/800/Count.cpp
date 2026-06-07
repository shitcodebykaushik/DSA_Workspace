// Count how many elements are strictly greater than X
#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    };
    int count = 0;
    
    for(int i =0;i<n;i++) {
        if(arr[i]>x){
            count = count+1;
        }
    }
    cout<<count<<endl;
}