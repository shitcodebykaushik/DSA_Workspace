#include <iostream>
using namespace std;

int main() {
    // Define a 2D array with 3 rows and 4 columns
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Print the 2D array
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < 3; ++i) {         // Loop through rows
        for (int j = 0; j < 4; ++j) {     // Loop through columns
            cout << array[i][j] << " ";
        }
        cout << endl; // Newline after each row
    }

    return 0;
}
