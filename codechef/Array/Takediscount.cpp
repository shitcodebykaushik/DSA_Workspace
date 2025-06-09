#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        vector<int> A(N);
        int original_sum = 0;
        int discounted_sum = 0;

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            original_sum += A[i];
            discounted_sum += max(0, A[i] - Y);
        }

        if (discounted_sum + X < original_sum) {
            cout << "COUPON" << endl;
        } else {
            cout << "NO COUPON" << endl;
        }
    }

    return 0;
}
