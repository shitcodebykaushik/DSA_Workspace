#include<bits/stdc++.h>
using namespace std;
int main () {
  
    string s = "node";
    string s1= "neetcode";
     
    int i = 0;

    for(int j=0;j<s1.size();j++){
        if(i<s.size() && s[i]==s1[j]) {
            i++;
        };
    }
    if(i==s.size()) {
        cout<<"True";
    }else {
        cout<<"False";
    };

}