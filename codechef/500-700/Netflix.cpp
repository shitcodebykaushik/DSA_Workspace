#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t,A,B,C,X;
cin>>t;
while(t--){
    cin>>A>>B>>C>>X;
    if((X<=A+B)||(X<=A+C)||(X<=B+C)){
        cout<<"Yes"<<endl;
    }else {
        cout<<"No"<<endl;
    }
}
}
