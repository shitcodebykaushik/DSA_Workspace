#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeMessage(string key, string message) {
       unordered_map<char,char>map;
       char ch = 'a';
       for(char c : key) {
        if(c == ' ') {
            continue;
        }if(map.find(c) == map.end()) {
            map[c] = ch++;
        }
       }
        string ans = "";
        for(char ch:message) {
            if(ch == ' ') {
                ans += ' ';
            }else {
                ans += map[ch];
            }
        }
        return ans;
    }
};
int main() {
    Solution sol;
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";
    string result = sol.decodeMessage(key, message);
    cout << result << endl; // Output: "this is a secret"
    return 0;
}