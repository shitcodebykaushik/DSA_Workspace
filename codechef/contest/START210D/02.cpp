#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;

        int k;
        if (N > X)
            k = N - X;
        else
            k = 0;

        int total = (k * (k + 1)) / 2;
        cout << total << endl;
    }
    return 0;
}
// this is the mathecmatical approach to solve the problem