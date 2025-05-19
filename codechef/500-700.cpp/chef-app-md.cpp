#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int s, x, y, z;
        cin >> s >> x >> y >> z;

        int freeMem = s - (x + y);
        if (freeMem >= z) {
            // already enough space
            cout << 0 << "\n";
        }
        else if (freeMem + max(x, y) >= z) {
            // deleting one app (the bigger one) suffices
            cout << 1 << "\n";
        }
        else {
            // even after deleting one, not enough → delete both
            cout << 2 << "\n";
        }
    }
    return 0;
}
