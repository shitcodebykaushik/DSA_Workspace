#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0; // pointer for the next valid position

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != val) {
            nums[k] = nums[i]; // place valid element at index k
            k++;               // move k forward
        }
    }

    return k; // first k elements are valid
}

// Demo
int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int k = removeElement(nums, val);

    // Output result
    cout << "k = " << k << endl;
    cout << "Modified nums: ";
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
