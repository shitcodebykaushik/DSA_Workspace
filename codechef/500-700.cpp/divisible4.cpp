#include <bits/stdc++.h>
using namespace std;

int main() {
	// logic is very sime of the N%4 give the remaineder 0 then it is divisble .
int t; 
cin>>t;
int c = t%4;
cout<<c<<endl;
if(c==0){
    cout<<t+1<<endl;
}else{
    cout<<t-1<<endl;
}
}
