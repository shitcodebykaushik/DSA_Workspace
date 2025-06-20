#include <bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    
    // Start from the end
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;  // Just increment and done
            return digits;
        }
        digits[i] = 0;  // Set to 0 and continue loop for carry
    }
    
    // If all digits were 9, we reach here
    digits.insert(digits.begin(), 1);  // e.g. [9,9,9] → [1,0,0,0]
    return digits;
};
int main () {
    vector<int> digits = {1, 2, 3};
    vector<int> result = plusOne(digits);
    
    cout << "Result: ";
    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl; // Expected output: Result: 1 2 4
    
    digits = {9, 9, 9};
    result = plusOne(digits);
    
    cout << "Result: ";
    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl; // Expected output: Result: 1 0 0 0
    
    return 0;
}