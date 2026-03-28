#include <bits/stdc++.h>
using namespace std;
int main () {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        if(b<=c){
            cout<<b<<" ";
        }else {
            cout<<c<<" ";
        }
        cout<<a<<endl;
    }else if (b>=a &&b>=c){
       if(a<=c){
        cout<<a<<" ";
       }else {
        cout<<c<<" ";
       };
       cout<<b<<endl;
    }else  if (c>=a && c>=b){
        if(a<=b){
            cout<<a<<" ";
        }else {
            cout<<b<<" ";
        }
        cout<<c<<endl;
    }
};