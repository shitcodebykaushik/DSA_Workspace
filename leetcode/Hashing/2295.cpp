#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        int n = nums.size(),m = operations.size();
        unordered_map<int,int>map;
        for(int i = 0;i<n;i++){
            map[nums[i]] = i;
        }
        for (int i = 0; i<m;i++){
            int position = map[operations[i][0]];
            nums[position] = operations[i][1];
            map[operations[i][1]] = position;
        }
        return nums;
    }
};
int main () {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> operations = {{1, 4}, {2, 5}, {3, 6}};
    vector<int> result = sol.arrayChange(nums, operations);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;

}