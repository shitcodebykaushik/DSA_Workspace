#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26,INT_MAX);
        for(int i = 0;i<words.size();i++){
            vector<int>freq(26,0);



            for(int j = 0;j<words[i].size();j++) {
                char currentChar = words[i][j];
                int index = currentChar -'a';
                freq[index]++;
            }
            for(int k = 0;k<26;k++) {
                minFreq[k] = min(minFreq[k],freq[k]);
            }
        }
        vector<string>result;
        for(int i = 0; i<26;i++) {
            while(minFreq[i]>0) {
                char currentChar = 'a'+i;
                string temp = "";
                temp.push_back(currentChar);
                result.push_back(temp);
                
                minFreq[i]--;

            }
        }
        return result;
    }
};
int main () {

}