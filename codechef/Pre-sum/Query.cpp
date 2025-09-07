#include <bits/stdc++.h>
using namespace std;
int func2 (const vector<int>arr){
    if(arr.size()<0){
        return 0;
    }
    vector<int>pre(arr.size());
    pre[0]= arr[0];
    for(int i =1;i<arr.size();i++){
        pre[i]=pre[i-1] + arr[i];
    }
    return pre[arr.size()-1];
};
int bruteforce (const vector<int>&pre,int l,int r) {
    int sum =0;
    for(int i=l;i<=r;i++){
        sum = sum + pre[i];
    }
    return sum;
};
int optimized_version_bruteforce (const vector<int>&pre,int l,int r) {

    return pre[r] - pre[l-1];
}
int main () {
    vector<int> ar={1,2,3,4,5};
    cout<<"The full prefix sum array is: "<<func2(ar)<<endl;
    int l = 1, r = 3; // Example range
   
    return 0;
}