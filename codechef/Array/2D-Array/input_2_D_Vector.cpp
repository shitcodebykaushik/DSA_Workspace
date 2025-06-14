#include<bits/stdc++.h>
using namespace std;
int main () {
    int rows, cols;
    cin>>rows>>cols;
    vector<vector<int>>matrix(rows,vector<int>(cols));   // this is the core thing where we are taking the input of the number of the row and the number of the column .
    // Input the 2D vector
    for(int i=0;i<rows;i++){
        for(int j =0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
    // Output the 2D vector
    for (int i = 0;i<matrix.size();i++){
        for (int j = 0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}