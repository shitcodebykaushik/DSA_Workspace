#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string concatHex36(int n) {
        string hex = "", hex36 = "";
        int n2 = n * n, n3 = n * n * n;

        while (n2 > 0) {
            int rem = n2 % 16;
            if (rem < 10) hex += char('0' + rem);
            else hex += char('A' + rem - 10);
            n2 /= 16;
        }

        reverse(hex.begin(), hex.end());

        while (n3 > 0) {
            int rem = n3 % 36;
            if (rem < 10) hex36 += char('0' + rem);
            else hex36 += char('A' + rem - 10);
            n3 /= 36;
        }

        reverse(hex36.begin(), hex36.end());

        return hex + hex36;
    }
};
