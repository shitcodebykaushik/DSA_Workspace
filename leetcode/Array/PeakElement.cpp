#include <bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[mid + 1]) {
            // Peak is in the left half (including mid)
            right = mid;
        } else {
            // Peak is in the right half (excluding mid)
            left = mid + 1;
        }
    }

    return left; // or right, since left == right at the end
};
int main () {
    vector<int> nums = {1, 2, 3, 1};
    int peakIndex = findPeakElement(nums);
    cout << "Peak element index: " << peakIndex << endl; // Expected output: Peak element index: 2
    return 0;
}
