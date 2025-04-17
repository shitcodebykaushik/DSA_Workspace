#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - 1];
    }
};

int main () {
    Solution sol;
    vector<int> n = {1, 2, 38, 97, 65};
    cout << "The Largest element in the array is: " << sol.largestElement(n) << endl;
    return 0;
}
