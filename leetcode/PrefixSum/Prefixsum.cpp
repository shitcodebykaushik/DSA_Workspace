#include <bits/stdc++.h>
using namespace std;
int main () {
    vector<int>nums = {2,4,6,8,10};
    int n = nums.size();
    // Print the original array
    cout<<"The original array is : ";
    for(int i = 0;i<n;i++){
        cout<<nums[i]<<" ";
    };
    cout<<endl;
    // Create a prefix sum array
    vector<int>prefixsum(n);
    prefixsum[0] = nums[0];
    for(int i =0;i<n;i++){
        if(i>0){
            prefixsum[i] = prefixsum[i-1]+ nums[i];
        }
    }
    // Print the prefix sum array
    cout<<"The prefix sum array is : ";
    for(int i = 0; i < n; i++){
        cout << prefixsum[i] << " ";    
    }
    cout<<endl;

}