#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    cout<<"The initial array is "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<< ""<<endl;
    // Store the last element (which will be thrown out)
    int last = arr[n - 1];

    // Shift all elements one step to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    cout << "Before insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<" " <<endl;

    // Fill the first position with 0
    arr[3] = 9;

    // Print the shifted array
    cout << "Right Shifted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
