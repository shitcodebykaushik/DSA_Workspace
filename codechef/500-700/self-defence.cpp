#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, count = 0;
        cin >> n;

        vector<int> a(n);  // Declare vector of size n

        for (int i = 0; i < n; ++i) {
            cin >> a[i];  // Read input values
        }
      //  cout<<"The value is "<<a[1]<<endl;   // once the first for loop run it store the vaule into the vector . Then another loop looks for the value in the vector .

        for (int num : a) {
            if (num >= 10 && num <= 60) {
                ++count;  // Count numbers in range [10, 60]
            }
        }

        cout << count << endl;  // Output result for this test case
    }

    return 0;
}
