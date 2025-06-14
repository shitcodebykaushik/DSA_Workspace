#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    int k=1; // Initializing the default value of the matrix to 0
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix[i][j]=k; // Printing the default values of the matrix
            k++;
        }
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" "; // Printing the matrix
        }
    }
    
}