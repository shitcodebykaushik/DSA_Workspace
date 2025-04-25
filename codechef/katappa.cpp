
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    int ready = 0, not_ready = 0;

    for (int i = 0; i < n; i++) {
        cin >> digits[i];
        if (digits[i] % 2 == 0) {
            ready++;
        } else {
            not_ready++;
        }
    }

    if (ready > not_ready) {
        cout << "READY FOR BATTLE" << endl;
    } else {
        cout << "NOT READY" << endl;
    }

    return 0;
}
