#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
       unordered_map<char,int>ch;
       for(char c : chars){
        ch[c] = 1+ch[c];
       } 
       int res = 0;
       for(const string& word : words){
        unordered_map<char,int> copy = ch;
    
       for(char c: word){
        if(copy.find(c) != copy.end() && copy[c] !=0) {
            copy[c] -= 1;
        }else {
            res -= word.length();
            break;
        }
       }
       res += word.length();
       }
       return res;
    }
};
int main () {
    Solution sol;
    vector<string> words = {"cat", "bt", "hat", "tree"};
    string chars = "atach";
    int result = sol.countCharacters(words, chars);
    cout << result << endl; // Output: 6
    return 0;
}