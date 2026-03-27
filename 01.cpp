#include <iostream>
#include <vector>
using namespace std;

int binary_search(const vector<int>& a, int k) {
    int l = -1, r = a.size();          // interval (l, r)
    while (r - l > 1) {
        int m = l + (r - l) / 2;        // avoid overflow
        if (a[m] < k) {
            l = m;                      // k is in (m, r)
        } else {
            r = m;                      // k is in (l, m]
        }
    }
    // now r is first index where a[r] >= k
    if (r < a.size() && a[r] == k) return r;
    else return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int k = 70;
    int pos = binary_search(arr, k);
    if (pos != -1) cout << "Found at index " << pos << endl;
    else cout << "Not found" << endl;
    return 0;
}