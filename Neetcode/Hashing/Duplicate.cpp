#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:

    bool duplicate(vector<int>&nums) {
        int n = nums.size();

        unordered_map<int,int>freq;

        for(int x : nums){
            freq[x]++;
        };

        for(auto p:freq){
            if(p.second>1){
                return true;
            }
            
        }
        return false;
    }
};

int main () {
vector<int>nums = {1,2,3,40,4};
Solution obj;
cout<<obj.duplicate(nums);
};