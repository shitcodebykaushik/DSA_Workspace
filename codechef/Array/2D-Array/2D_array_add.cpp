#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>A(n,vector<int>(m));
    vector<vector<int>>B(n,vector<int>(m));
    vector<vector<int>>Result(n,vector<int>(m));
    // Input for first 2D array
    // First input the number of rows and columns in A 
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    // Input for second 2D array
    for(int i =0; i<n;i++){
        for(int j =0;j<m;j++){
            cin>>B[i][j];
        }
    }


    // Adding the two 2D arrays
    for(int i =0; i<n;i++){
        for(int j=0;j<m;j++){
            Result[i][j] = A[i][j] + B[i][j];
        }
    }


    // Output the result
    for (int i = 0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<Result[i][j]<<" ";
        }
        cout<<endl;
    }
}
