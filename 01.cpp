#include <bits/stdc++.h>

#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec std::vector
#define pii std::pair<int, int>
#define se second
#define fi first
#define pb push_back
#define maxel(v) *std::max_element(v.begin(), v.end())
#define minel(v) *std::min_element(v.begin(), v.end())
#define yes std::cout << "YES\n";
#define m1 std::cout << "-1\n";
#define no std::cout << "NO\n";

typedef int64_t ll;
typedef uint64_t ull;
typedef long double ld;

const ll mod = 1e9 + 7;
const ll mod2 = 1e9 + 9;
const ll mod3 = 998244353;
const double pi = 3.141592653589793238;
const long double EPS = 1e-9;
const int MAXN = 1e5 * 5;
const int LOGN = 17;

using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n % 4 == 0) { 
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}