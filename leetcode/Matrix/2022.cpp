#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<vector<int>> convert(vector<int>& mat,int m, int n) {
       
        if(m*n != mat.size() ) {
            return {}; // Return empty matrix if conversion is not possible
        }
         vector<vector<int>> ans(m, vector<int>(n));
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                ans[i][j] = mat[i*n + j];
            }
        }
        return ans;
       
}
};
int main () {
    Solution sol;
    vector<int> mat = {1, 2, 3, 4, 5, 6};
    int m = 2, n = 3;
    vector<vector<int>> result = sol.convert(mat, m, n);
    
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}