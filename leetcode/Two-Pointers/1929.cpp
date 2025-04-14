class Solution {
    public:
    vector<int> getconciatation (vector<int>&nums){
        for(int i =0,n=nums.size();i<n;++i){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};