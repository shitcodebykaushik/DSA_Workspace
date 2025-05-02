#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x,a,b;
    cin>>x>>a>>b;
    int c =a*1;
    int d = b*2;
    if (c+d>=x){
        cout<<"Qualify"<<endl;
    }else {
        cout<<"NotQualify"<<endl;
    }
}
}
