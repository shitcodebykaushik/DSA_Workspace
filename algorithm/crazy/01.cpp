#include <iostream>
#include <vector>
using namespace std;

void movezero(vector<int>& nums) {
    int ptr = 0;

    // Move non-zero elements to the front
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[ptr] = nums[i];
            ptr++;
        }
    }

    // Print non-zero part
    cout << "Non-zero part: ";
    for (int i = 0; i < ptr; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Set remaining elements to 0
    for (int i = ptr; i < nums.size(); i++) {
        nums[i] = 0;
    }

    // Print full updated array
    cout << "Full array after move: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> t = {1, 20, -3, 0, 5};
    movezero(t);
    return 0;
}
