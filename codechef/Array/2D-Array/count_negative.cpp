#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int count = 0;
    for(int i=0;i<n;i++) {
        for(int j=00;j<m;j++){
            if(arr[i][j]<0){
                count++
;            }
        }
    }
    cout << count << endl;
    return 0;
}