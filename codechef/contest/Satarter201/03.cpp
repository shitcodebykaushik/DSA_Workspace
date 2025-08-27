#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string str;
        cin >> n >> str;

        // Step 1: Create a state array to mark valid positions
        vector<bool> isValid(n, false);

        // Mark positions that are part of a "111" pattern
        for (int j = 1; j + 1 < n; j++) {
            if (str[j - 1] == '1' && str[j] == '1' && str[j + 1] == '1') {
                isValid[j - 1] = isValid[j] = isValid[j + 1] = true;
            }
        }

        // Step 2: Validate the string against the state array
        bool valid = true;
        for (int k = 0; k < n; k++) {
            if ((str[k] == '1' && !isValid[k]) || (str[k] == '0' && isValid[k])) {
                valid = false;
                break;
            }
        }

        // Step 3: Output the result
        cout << (valid ? "Yes" : "No") << "\n";
    }
    return 0;
}


/*7
3
000
4
1111
5
00101
7
0110111
11
11101110111
4
0011
4
1100*/