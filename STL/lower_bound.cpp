#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 30, 40, 50};
    auto it = lower_bound(v.begin(), v.end(), 30);
    cout << "Lower bound of 30 is at index: " << (it - v.begin()) << endl;
   
}
