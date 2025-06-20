#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        long long count = 0;

        if (x > y) {
            swap(a, b);
            swap(x, y);
        }

        if (k >= a) {
            long long cook1 = (k - a) / x + 1;
            count += cook1;
            k -= cook1 * x;
        }

        if (k >= b) {
            long long cook2 = (k - b) / y + 1;
            count += cook2;
            k -= cook2 * y;
        }

        cout << count << endl;
    }

    return 0;
}
