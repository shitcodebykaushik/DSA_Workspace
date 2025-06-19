#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        // Get the number of rows (m) and column(n) in the matrix 
        int m = matrix.size();
        int n = matrix[0].size();  // this get the number of the column in the first row 
        // Creating new vector to store the value in it .
        vector<vector<int>> ans(m,vector<int>(m));

        // creating a vector to store the maxium elemets in each column and initially it value is  -1

        vector<int> col (n,-1);
        

        // Iterate through each column of the matrix 
        for(int i =0;i<n;i++){
            // Iterate through each row of the matrix 
            for(int j = 0;j<m;j++){
                // copy the elements from the original array to the new 2darray 
                ans[i][j] = matrix[i][j];
                
                // Update the col vector with the maxium element in the current column 
                col[i] = max(col[i],matrix[j][i]);
            }
        }
        // Iterate through each elements in the new matrix 
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[j][i]== -1){
                    ans[j][i] = col[i];
                }
            }
        }
        // Return the modified matrix i.e ans
        return ans;
    }
};
int main () {
    
}