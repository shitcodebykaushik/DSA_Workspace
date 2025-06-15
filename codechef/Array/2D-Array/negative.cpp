#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> negative (n,vector<int>(m));
    // Storing the element into the 2D array
    for (int i =0;i<n;i++){
        for(int j = 0; j<m;j++){
            cin>>negative[i][j];
        }
    }
    int count =0;
    // Printing the 2D array
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(negative[i][j]<0){
                count++;
            }
        }
    }
    cout<<count<<endl;
}