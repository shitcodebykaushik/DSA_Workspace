
#include<bits/stdc++.h>
class Solution {
    public :
    string mergestring(string word1, string word2){
    string final;
    int m =word1.size(); n=word2.size();
    for (int i =0;i<m ||int i<n;++i){
        if(i<m)final+=word1[i];
        if(i<n)final+=word2[i];
    } return final;
    }
};