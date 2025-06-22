#include <bits/stdc++.h>
using namespace std;

bool isSquarePossible(int l1, int b1, int l2, int b2, int l3, int b3) {
    vector<pair<int, int>> rectangle = {{l1, b1}, {l2, b2}, {l3, b3}};
    int area = l1 * b1 + l2 * b2 + l3 * b3;
    int side = sqrt(area);

    if (side * side != area) return false;

    sort(rectangle.begin(), rectangle.end());

    do {
        int L1 = rectangle[0].first, B1 = rectangle[0].second;
        int L2 = rectangle[1].first, B2 = rectangle[1].second;
        int L3 = rectangle[2].first, B3 = rectangle[2].second;

        if (L1 == L2 && L2 == L3 && L1 == side && B1 + B2 + B3 == side)
            return true;

        if (B1 == B2 && B2 == B3 && B1 == side && L1 + L2 + L3 == side)
            return true;

        if (B1 == side && B2 + B3 == side && L1 + max(L2, L3) == side)
            return true;

        if (L2 + L3 == side && B2 == B3 && L1 == side && B1 + B2 == side)
            return true;

        if (L1 + L2 == side && B1 == B2 && L3 == side && B3 + B1 == side)
            return true;

        if (L1 + L3 == side && B1 == B3 && L2 == side && B2 + B1 == side)
            return true;

        if (L2 + L3 == side && B2 == B3 && L1 == side && B1 + B2 == side)
            return true;

    } while (next_permutation(rectangle.begin(), rectangle.end()));

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        if (isSquarePossible(l1, b1, l2, b2, l3, b3))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
