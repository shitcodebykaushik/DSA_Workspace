#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        vector<int> pos;
        pos.reserve(n);
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') pos.push_back(i);
        }
        if (pos.empty()) {
            cout << 0 << '\n';
            continue;
        }

        int protections = 0;
        int j = 0; 
        const int m = (int)pos.size();

        while (j < m) {
           
            ++protections;
            int anchor = pos[j];
            ++j;
            while (j < m && pos[j] - anchor < k) {
                anchor = pos[j];
                ++j;
            }
        }

        cout << protections << '\n';
    }
    return 0;
}
