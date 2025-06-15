#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    vector<vector<int>> matrix(n,vector<int>(n));
    vector<vector<int>> result(n,vector<int>(n,0));
    for(int i =0; i<n;i++){
        for (int j = 0; j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int sum = 0;  // Variable to store the sum of diagonal elements and later on we are updating the reuslt .
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i==j){
                result[i][j] = matrix[i][j];
                sum += matrix[i][j];
             }else if (i+j== n-1){
                result[i][j] = matrix[i][j];
                sum  += matrix[i][j];
             }
    }
}
     // Chek the twice condition for the diagonal elements
   

    // Printing the result matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    cout<< sum << endl;
    return 0;

}