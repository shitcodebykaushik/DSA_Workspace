#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, N, M, K;
    cin >> t;
    while (t--) {
        cin >> N >> M >> K;
        
        int overall = N * M;
        int maxalice = -1;
        if (K == 0) {
            cout << overall << endl;
            continue;
        }
        for (int i = 1; i < N; i++) {
            int a1 = i * M;
            int a2 = (N - i) * M;

            if (a1 >= K)
                maxalice = max(maxalice, overall - a1);
            if (a2 >= K)
                maxalice = max(maxalice, overall - a2);
        }
        for (int j = 1; j < M; j++) {
            int a1 = j * N;
            int a2 = (M - j) * N;

            if (a1 >= K)
                maxalice = max(maxalice, overall - a1);
            if (a2 >= K)
                maxalice = max(maxalice, overall - a2);
        }

        cout << maxalice << endl;
    }

    return 0;
}
