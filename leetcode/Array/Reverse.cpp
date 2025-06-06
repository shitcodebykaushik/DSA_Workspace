#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the size of the array: \n";
    cin >> n;

    int arr[n];

    // Input the array elements
    cout << "Enter " << n << " elements: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   // Output the original array 
   cout<<"The original array : \n"<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    // Reverse the array in-place
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Output the reversed array
    cout << "\nReversed array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
