#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int first = -1, second = -1;

        for (int i = 0; i < N; i++) {
            if (A[i] > first) {
                second = first;
                first = A[i];
            } else if (A[i] != first && A[i] > second) {
                second = A[i];
            }
        }

        cout << (first + second) << endl;
    }

    return 0;
}
