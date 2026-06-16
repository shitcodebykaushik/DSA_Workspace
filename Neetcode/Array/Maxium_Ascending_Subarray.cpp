#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    int maxAscendingSum(vector<int>& nums) {
        int currSum = nums[0];
        int maxSum = nums[0];

        for(int i = 1;i<nums.size();i++) {
            if(nums[i]>nums[i-1]) {
                currSum += nums[i];
            }else {
                currSum = nums[i];
            }
            if(currSum > maxSum)
              maxSum = currSum;
        };

        return maxSum;
    }
};

int main () {
    
}