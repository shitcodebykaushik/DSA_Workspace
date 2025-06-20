#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
    // Step 1: Edge cases
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int reversed = 0;
    while (x > reversed) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x = x / 10;
    }

    // Step 2: Compare halves
    return (x == reversed) || (x == reversed / 10);
};
int main () {
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    if (isPalindrome(x)) {
        cout << x << " is a palindrome." << endl;
    } else {
        cout << x << " is not a palindrome." << endl;
    }
    return 0;
}
