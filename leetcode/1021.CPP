#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string removeOuterParentheses(string s) {
         string result = "";
         int count = 0;
         int start = 0;
         for (int i = 0;i<s.size();++i){
            if(s[i]=='('){
                count++;
            }else  {
                count--;
            }if (count==0){
                result += s.substr(start+1,i-start-1);
                start = i+1;
            }
         }
         return result;
        }
    };
    int main () {
        Solution sol;
        string s = "(()())(())";
        cout << sol.removeOuterParentheses(s) << endl; // Expected output: "()()()"
        return 0;
    }