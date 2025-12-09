#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

void solve() {
    long long N;
    if (!(cin >> N)) return;

    static const set<long long> primes = {2, 3, 5, 7, 11};
    static const set<long long> semiprimes = {4, 6, 9, 10}; // products of two primes

    int R;
    if (N == 1) {
        R = 1;
    } else if (primes.count(N)) {
        R = 1;
    } else if (semiprimes.count(N)) {
        R = 2;
    } else {
        R = 3;
    }
    
    cout << R << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }

    return 0;
}