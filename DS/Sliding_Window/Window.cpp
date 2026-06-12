#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:

    bool contain(vector<int>&nums,int k) {
        int n = nums.size();
        
        for(int right = 0;right<n; right++) {
            int left = right - k;
            if(left<0){
                left = 0;
            }
            for(int i=left;i<right;i++) {
                if(nums[i] == nums[right]) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main () {
    vector<int>nums = {1,2,3,1};
    int k = 3;
    Solution s;
    cout<<s.contain(nums,k);
}