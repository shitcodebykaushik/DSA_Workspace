/*
Duplicate Integers
Given N non-negative integers, check if there is any duplicate value present.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input:
The first line of each test case contains a positive integer N - the number of integers.
The second line of each test case contains N space separated integers.
*/






#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> s(n);

        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        bool found = false;

        for (int i = 0; i < n && !found; i++) {
            for (int j = i + 1; j < n; j++) {
                if (s[i] == s[j]) {
                    cout << "Yes" << endl;
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            cout << "No" << endl;
        }
    }

    return 0;
}
