#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m;
    cin>>n>>m;
    // Decclareing the 2D array 
    vector<vector<int>> matrix(n,vector<int>(m));

    // Input the elements of the 2D array 
    for(int i =0; i<n; i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    // Printing the elements in zig-zag order
    for(int i =0;i<n;i++){
        if(i %2 ==0){
            for(int j =0;j<m;j++){ // For even rows, print in normal order right to left
                cout<<matrix[i][j]<<" ";
            }
           } else {
                for (int j =m-1;j>=0;j--){ // For odd rows, print in reverse order left to right
                    cout<<matrix[i][j]<<" ";
                }
            
        }
    };
}