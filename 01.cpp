#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int best = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int big;
            if (a[i] > a[j]) {
                big = a[i];
            } else {
                big = a[j];
            }

            int small;
            if (a[i] <= a[j]) {
                small = a[i];
            } else {
                small = a[j];
            }

            int discount;
            if (big / 2 < 100) {
                discount = big / 2;
            } else {
                discount = 100;
            }

            int cost = small + (big - discount);

            if (cost <= k) {
                int currentTaste = b[i] + b[j];
                if (currentTaste > best) {
                    best = currentTaste;
                }
            }
        }
    }

    cout << best << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        solve();
        t = t - 1;
    }
    return 0;
}