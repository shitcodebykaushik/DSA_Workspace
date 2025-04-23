#include <iostream>
#include <vector>
using namespace std;

vector<int> computeLPS(string pattern) {
    int n = pattern.length();
    vector<int> lps(n, 0); // LPS array of size n, initialized with 0

    int len = 0; // length of the previous longest prefix suffix
    int i = 1;

    while (i < n) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1]; // fallback in the pattern
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}

int main() {
    string pattern = "ABABAC";
    vector<int> lps = computeLPS(pattern);

    cout << "LPS array: ";
    for (int val : lps) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
