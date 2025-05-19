#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int X,Y,Z;
    cin>>X>>Y>>Z;
    if(X<=3){
        cout<<X*Y<<endl;
    }else if(X>3){
        int d = ((X*Y) + (((X-1)/3)*Z));
        cout<<d<<endl;
    }
}
}
