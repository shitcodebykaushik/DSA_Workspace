#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; 
    if (!(cin >> T)) return 0;
    while (T--) {
        long long a11, a12, a21, a22;
        cin >> a11 >> a12 >> a21 >> a22;
        long long s1 = a11 + a22;
        long long s2 = a12 + a21;
        long long diff = llabs(s1 - s2);
        if (min(s1, s2) == 0) diff = max(0LL, diff - 1);
        cout << diff << '\n';
    }
    return 0;
}
