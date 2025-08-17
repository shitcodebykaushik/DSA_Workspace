#include <bits/stdc++.h>
using namespace std;
int func2 (const vector<int>arr,int n){
    if(n<0){
        return 0;
    }
    int pre[n];
    pre[0]= arr[0];
    for(int i =1;i<n;i++){
        pre[i]=pre[i-1] + arr[i];
    }
    return pre[n-1];
};
int bruteforce (const vector<int>&arr,int l,int r) {
    int sum =0;
    for(int i=l;i<=r;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main () {
int n=5;
    vector<int> ar={1,2,3,4,5};
    cout<<"The prefix sum of the array is: "<<func2(ar,n)<<endl;
    int l=0,r=2;
    cout<<"The sum of the range from "<<l<<" to "<<r<<" is: "<<bruteforce(ar,l,r)<<endl;
    return 0;
}