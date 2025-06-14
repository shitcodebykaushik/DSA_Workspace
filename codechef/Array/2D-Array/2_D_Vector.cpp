#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<vector<int>> matrix = {
        {1,2},
        {3,4}
    };
    // Print the elements of the 2D vector
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++) {
            cout << matrix[i][j] << " ";  // Print each element in the 2D vector
        }
    
    cout<<endl;
}
return 0;
}