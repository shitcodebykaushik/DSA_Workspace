#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& A) {
        int N = A.size(),ans =0;
        unordered_map<int,int>m;
        for(int i=0;i<N;i++){
            m[A[i]]++;
        }
        for(auto& [n,f] : m){
            if(f==2){
                ans^=n;
            }
        }
        return ans;
    }
};
int main () {
    Solution sol;
    vector<int> A = {1, 2, 3, 2, 4, 5, 1};
    int result = sol.duplicateNumbersXOR(A);
    cout << result << endl; // Output: 3
    return 0;
}