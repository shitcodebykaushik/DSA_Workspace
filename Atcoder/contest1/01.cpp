#include <bits/stdc++.h>
using namespace std;

int main () {
    int x,y,z;
    cin>>x>>y>>z;
    int num  = x-z*y;
    int n2 = z-1;
    if (num%n2==0 && num/n2>=0) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
}