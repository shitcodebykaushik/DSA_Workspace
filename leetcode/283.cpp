#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int ptr = 0;
            for (int i = 0; i<nums.size();i++){
                if(nums[i]!=0){
                    nums[ptr]=nums[i];
                    ptr++;
                }
            }
                for (int i = ptr; i<nums.size(); i++){
                    nums[i] = 0;
                }
    
            }
        
    };
    int main () {
        Solution sol;
        vector<int> nums = {0, 1, 0, 3, 12};
        sol.moveZeroes(nums);
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl; // Expected output: 1 3 12 0 0
        return 0;
    }