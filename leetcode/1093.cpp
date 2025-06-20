#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string reverseWords(string s) {
            vector<string>words;
            string word;
            istringstream iss(s);
            while (iss>>word){
                words.push_back(word);
            }
            string result = "";
            for(int i= words.size()-1;i>=0; --i){
                result  += words[i];
                if(i!=0) result += " ";
            }
            return result;
        }
    };
    int main () {
        Solution sol;
        string s = "the sky is blue";
        cout << sol.reverseWords(s) << endl; // Expected output: "blue is sky the"
        return 0;
    }