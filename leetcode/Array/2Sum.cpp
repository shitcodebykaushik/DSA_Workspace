#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            return {numIndex[complement], i};
        }
        numIndex[nums[i]] = i;
    }

    return {-1, -1};
}

int main () {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    
    if (result[0] != -1) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl; // Expected output: Indices: 0, 1
    } else {
        cout << "No solution found." << endl;
    }
    
    return 0;
}