#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentCount = 0;
        int maxiumCount = 0;


    for(int i  =0;i<nums.size();i++) {
        if(nums[i] == 1) {
            currentCount++;

            if(currentCount>maxiumCount) {
                 maxiumCount = currentCount;
            }
        }
        else {
            currentCount = 0;
        }
    }
    return maxiumCount;
    }
};
int main () {
    
}