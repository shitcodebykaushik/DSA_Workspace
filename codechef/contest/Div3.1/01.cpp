#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        int mi = x[0], ma = x[n - 1];
        // You must cover the interval [mi, ma], plus travel from s to the nearer end.
        int ans = (ma - mi) + min(abs(s - mi), abs(s - ma));
        cout << ans << "\n";
    }

    return 0;
}