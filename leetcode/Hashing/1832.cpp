#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.length();
        vector<int>map(26,0);
        for(int i = 0;i<n;i++){
            map[sentence[i] -'a']++;
        }
    
        for (int i = 0;i<26;i++){
            if(map[i] == 0){
                return false;
            }
        }
        return true;
    }
};
int main () {
    Solution sol;
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    bool result = sol.checkIfPangram(sentence);
    cout << (result ? "True" : "False") << endl; // Output: True
    return 0;
}