#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--)
    {
     int a ,b ,c;
     cin>>a>>b>>c;
     if (a+b>2*c){
        cout<<"YES"<<endl;
     }else {
        cout<<"NO"<<endl;
     }
    };
};
    
// Test case 
/*3
4 5 6
1  2 5
5  5  4
*/