#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t,n;
cin>>t;
while(t--){
    cin>>n;
    if(n%n && n%1==0){
        cout<<"Yes"<<endl;
    }else {
        cout<<"No"<<endl;
    }
}
}
