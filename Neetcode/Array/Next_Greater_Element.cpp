#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int>nextGreator(vector<int>&nums1,vector<int>&nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> ans(n1);

        for(int i = 0;i<n1;i++) {
            
            int pos = -1;

            // FInding the nums[i] in nums2 

            for (int j = 0;j<n2;j++){
                if(nums2[j] == nums1[i]) {
                    pos = j;
                    break;

                }
            }

            int nextGreator = -1;

            for(int j = pos+1;j<n2;j++){
              
                if(nums2[j] > nums2[pos]) {
                    nextGreator = nums2[j];
                    break;
                }
            }

            ans[i] = nextGreator;

        }
        return ans;
    }
};

int main () {

}