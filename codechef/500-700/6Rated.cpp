#include <bits/stdc++.h>
using namespace std; 

int main () {
    int x;
    cin>>x;
    if(x<1 || x>4){
        cout<<0<<endl;
    }else {
     cout<<1000*(1 << (4-x))<<endl;
    }
}