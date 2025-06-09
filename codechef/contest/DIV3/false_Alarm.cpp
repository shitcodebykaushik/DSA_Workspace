#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool possible = false;

        for (int i = 0; i <= n - x; i++) {
            bool ok = true;
        
            for (int j = 0; j < i; j++) {
                if (a[j] == 1) ok = false;
            }
           
            for (int j = i + x; j < n; j++) {
                if (a[j] == 1) ok = false;
            }

            if (ok) {
                possible = true;
                break;
            }
        }

        // Handle edge case: button covers the entire path
        if (x >= n) possible = true;

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
