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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool used_button = false;
        int time_left = 0;
        bool success = true;

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                
                if (used_button && time_left > 0)
                    time_left--; // Still counting down the button time
            } else {
                // Door is closed
                if (!used_button) {
                    used_button = true;
                    time_left = x - 1; // Activate button, 1 second used now
                } else if (time_left > 0) {
                    time_left--;
                } else {
                    success = false; // No time left and door is closed
                    break;
                }
            }
        }

        cout << (success ? "YES" : "NO") << endl;
    }

    return 0;
}
