// This qs is based on the two pointer concept where we have to create the new array and fit the value according to the rule which is postive at even and negative at the odd index.
// This is not inplace solution.

#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector <int> rearrange(vector<int>&nums){
        vector<int> ans(nums.size(),0);
        int postive = 0, negative = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
               ans[postive] = nums[i];
               postive +=2;
            }else {
                ans[negative] = nums[i];
                negative += 2;
            }
        }
        return ans;
    }
};

int main () {
  vector<int> nums = {3, 1, -2, -5, 2, -4};
    Solution sol;
    vector<int> result = sol.rearrange(nums);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;

}