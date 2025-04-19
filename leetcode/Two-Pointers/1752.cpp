class Solution {
    public:
       int asecending (vector<int>&nums) {
        int cnt = 0;
        for(int i = 1;i<nums.size();i++){
            if( nums[i]<nums[i-1]){
                cnt++;
            }
        }
        return cnt;
       }
        bool check(vector<int>& nums) {
            int cnt = asecending(nums);
            if (nums[0]<nums[nums.size()-1]) cnt++;
            if (cnt<=1) return 1;
            
            return 0;
        }
    };