#include<bits/stdc++.h>
using namespace std;
int main () {
    string s = "abc";
    int score =0;
    for(int i=0; i<s.size()-1;i++ ) {
        score = score +abs(s[i]-s[i+1]);
    }
    cout<<score;
}