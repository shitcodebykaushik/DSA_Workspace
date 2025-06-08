#include <vector>
using namespace std;

void reverseRange(vector<int>& nums, int start, int end) {
    while (start < end) {
        // Swap elements at start and end
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // To handle cases where k > n

    // Step 1: Reverse the whole array
    reverseRange(nums, 0, n - 1);

    // Step 2: Reverse first k elements
    reverseRange(nums, 0, k - 1);

    // Step 3: Reverse the remaining elements
    reverseRange(nums, k, n - 1);
}
