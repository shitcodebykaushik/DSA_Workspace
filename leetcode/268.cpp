#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int n = nums.size();
            sort(nums.begin(),nums.end());
            for (int i =0;i<n;i++){
                if(nums[i]!=i){
                    return i;
                }
            }
            return nums.size();
        }
    };
    int main () {
        Solution sol;
        vector<int> nums = {3, 0, 1};
        cout << sol.missingNumber(nums) << endl; // Output: 2
        return 0;
    }