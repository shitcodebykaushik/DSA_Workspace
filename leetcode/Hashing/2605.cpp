#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end()), set2(nums2.begin(), nums2.end());
        int commonMin = INT_MAX, min1 = INT_MAX, min2 = INT_MAX;
        for (int num : nums1){
            if (set2.count(num))
                commonMin = min(commonMin, num);
            min1 = min(min1, num);
        }
        for (int num : nums2){
            min2 = min(min2, num);
        }
        if (commonMin != INT_MAX)
            return commonMin;
        return min(min1 * 10 + min2, min2 * 10 + min1);
    }
};

int main () {
    Solution sol;
    vector<int> nums1 = {4, 1, 3};
    vector<int> nums2 = {5, 7, 2};
    int result = sol.minNumber(nums1, nums2);
    cout << result << endl; // Expected output: 12
    return 0;
}