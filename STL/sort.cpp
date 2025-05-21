#include<bits/stdc++.h>
using namespace std ;
int main (){
    vector<int>nums = {1,26,3};
    auto n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i =0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    

}