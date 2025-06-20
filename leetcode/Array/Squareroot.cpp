#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
    if (x == 0 || x == 1) return x;

    int left = 1, right = x, ans = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Use long long to prevent overflow
        long long sq = 1LL * mid * mid;

        if (sq == x) {
            return mid;
        } else if (sq < x) {
            ans = mid; // store potential answer
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return ans;
};
int main() {
    int x;
    cout << "Enter a non-negative integer: ";
    cin >> x;

    if (x < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return 1;
    }

    int result = mySqrt(x);
    cout << "The square root of " << x << " is approximately: " << result << endl;

    return 0;
}