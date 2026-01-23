//  We have the DNA sequence of the A,C,G and T . Job is to find the longest 
// repeation in the sequence 
#include<bits/stdc++.h>
using namespace std;
// Using the concept of hashing to solve this problem .
int main () {
    string s ;
    cin>>s;
    int mx =1;
    int cur =1;
    for(int i =1;i<(int)s.length();i++){
        if(s[i]==s[i-1])
        {
            cur++;
            mx = max(mx,cur);
        }else {
            cur =1;
        }
    }
    cout<<mx;
}