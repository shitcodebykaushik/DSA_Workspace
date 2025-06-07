#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateSortedArrayByK(vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> rotated;

    // Add elements from index k to end
    for (int i = k; i < n; i++) {
        rotated.push_back(arr[i]);
    }

    // Add first k elements to the end
    for (int i = 0; i < k; i++) {
        rotated.push_back(arr[i]);
    }

    return rotated;
}
int main() {
    vector<int> sorted = {1, 2, 3, 4, 5};
    int k = 1;   // NUmber of the element you want to rotate .

    vector<int> rotated = rotateSortedArrayByK(sorted, k);

    for (int x : rotated) {
        cout << x << " ";
    }
    return 0;
}
