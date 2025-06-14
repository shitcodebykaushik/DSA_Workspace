#include<bits/stdc++.h>
using namespace std;
int main () {
    // Declare a 2D array of integers with 2 rows and 2 columns
    // and initialize it with values 1, 2, 3, and 4.
    // The array is initialized in row-major order.
    int matrix[2][2] = {
        {1,2},
        {3,4}
    };
    // Print the elements of the 2D array
    // This is not exacctly two pointer but it similar to the two pointer approach in the nested loop.
    for(int i = 0; i<2;i++){  
        //here in the first step i is the row and j is the colum so , i in the first step is 0 and j will go from 0 to 1 and the compute will be matrix[0][0] and matrix[0][1]
        for(int j=0;j<2;j++){
            cout<<matrix[i][j]<<" ";  // the is the compute phase of the printing  for each row  ,
        }
        cout<<endl; // Print a new line after each row
    }
}