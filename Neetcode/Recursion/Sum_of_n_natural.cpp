#include<bits/stdc++.h>
using namespace std;
int sum(int n) {
    if(n==0){
        return 0;
    }cout<<"1 ";
    cout<<"2"<<endl;
    return n+sum(n-1);
}
int main () {
cout<<sum(2);
}