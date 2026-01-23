//  We have the DNA sequence of the A,C,G and T . Job is to find the longest 
// repeation in the sequence 
#include<bits/stdc++.h>
using namespace std;
// Using the concept of hashing to solve this problem .
// But here we can do it in a simple way
// We will iterate through the string and keep a counter for the current
// repeation and a variable to store the maximum repeation found so far
// If the current character is same as the previous one we will increment
// the counter else we will reset the counter to 1
// Finally we will print the maximum repeation found .
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