#include <iostream>
using namespace std;

int main() {
    int A[] = {2, 4, 6, 8, 10};
    int n = sizeof(A) / sizeof(A[0]);
    int prefix[n];

    prefix[0] = A[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + A[i];
    }

    cout << "Prefix Sum: ";
    for (int i = 0; i < n; i++) {
        cout << prefix[i] << " ";
    }

    return 0;
}
