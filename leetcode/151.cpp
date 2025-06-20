#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string reverseWords(string s) {
            vector<string> words;
            string word;
            istringstream iss(s);
    
            // Step 1: Split the sentence into words manually
            while (iss >> word) {
                words.push_back(word);
            }
    
            // Step 2: Rebuild the sentence in reverse word order
            string result = "";
            for (int i = words.size() - 1; i >= 0; --i) {
                result += words[i];
                if (i != 0) result += " ";
            }
    
            return result;
        } 
    };
    
int main() {
    Solution solution;
    string input = "the sky is blue";
    string output = solution.reverseWords(input);
    cout << output << endl; // Expected output: "blue is sky the"
    return 0;
}