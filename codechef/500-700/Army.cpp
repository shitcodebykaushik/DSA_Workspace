// Using the  || operator to find the largest army in the three 
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t,n1,n2,n3;
cin>>t;
while(t--){
    cin>>n1>>n2>>n3;
    if((n1>n2+n3) || (n2>n1+n3) || (n3>n1+n2)){
        cout<<"Yes"<<endl;
    }else {
        cout<<"No"<<endl;
    }
}
}
