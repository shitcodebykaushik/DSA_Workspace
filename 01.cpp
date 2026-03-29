#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; 
    cin >> T;
    while (T--) {
        int n; 
        cin >> n;

        if (n == 2) {
            cout << "2 1\n";
            continue;
        }

        if (n == 3) {
            cout << "2 3 1\n";
            continue;
        }

        if (n % 2 == 0) {
            cout << 2 << ' ';
            for (int x = n; x >= 3; --x) cout << x << ' ';
            cout << 1 << '\n';
        } else {
            cout << 3 << ' ';
            for (int x = n; x >= 4; --x) cout << x << ' ';
            cout << 2 << ' ' << 1 << '\n';
        }
    }
    return 0;
}
