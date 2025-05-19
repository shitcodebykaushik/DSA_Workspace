#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t,x,y;
cin>>t;
while(t--){
    cin>>x>>y;
    if(x==y){   // this is the base case 
        cout<<"0"<<endl;
    }else {
         cout<<((y-1)/x)<<endl;  // this is core logic 
    }
}
}
