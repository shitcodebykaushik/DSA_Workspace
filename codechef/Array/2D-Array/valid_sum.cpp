#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    int total_sum = n*m;
    if(total_sum % 2 != 0) {
        cout << -1 << endl;
    }else {
        for (int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                cout<<1<<" ";
            }
             cout << endl;
        }
       
    }
    return 0;
}