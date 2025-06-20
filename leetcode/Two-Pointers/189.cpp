#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int rotate(vector<int>&nums,int k){
        int n = nums.size();
        k = k % n; // Handle cases where k is greater than n
        // Reverse the entire array
        reverse(nums.begin(),nums.end());
        //  Reverse the first k elements;
        reverse(nums.begin(),nums.begin() + k);
        // Reverse the remaining n-k elements
        reverse(nums.begin()+k,nums.end());
        return 0; // Return 0 to indicate successful completion
    }
};
int main () {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    Solution sol;
    sol.rotate(nums, k);
    // Print the rotated array
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";     
       
}
 return 0;
}