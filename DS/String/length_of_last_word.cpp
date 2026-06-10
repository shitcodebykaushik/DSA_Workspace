#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:

    int length(string s) {
        int i = s.size()-1;
        // this is for trailing zeros 
         while (i>0 && s[i] == ' ') 
            i--;
            int len = 0;

            // count the charaters of the last word 
            while(i>=0 && s[i] != ' ')
            {
                len++;
                i--;
            }
        
         
        return len;
    }
};

int main () {
    string s = "a";
    Solution sol;
    cout<<sol.length(s);
};