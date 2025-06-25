#include <bits/stdc++.h>
using namespace std;
class NumArray {
    public :
    vector<int> v;
    NumArray(vector<int>& nums) {
        v.resize(nums.size() + 1);
        for (int i = 0; i < nums.size(); i++) {
            v[i + 1] = v[i] + nums[i];  
}
    }

    // Returns the sum of the elements of nums between indices left and right (inclusive).
    int sunRange(int left,int right){
        return v[right + 1] - v[left];
    }
};
int main () {
    vector<int> nums = {1, 2, 3, 4, 5};
    NumArray numArray(nums);
    cout << numArray.sunRange(0, 2) << endl; // Output: 6 (1 + 2 + 3)
    cout << numArray.sunRange(1, 3) << endl; // Output: 9 (2 + 3 + 4)
    cout << numArray.sunRange(0, 4) << endl; // Output: 15 (1 + 2 + 3 + 4 + 5)
    return 0;

}