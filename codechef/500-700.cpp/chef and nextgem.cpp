#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t ;
    cin>>t;
    while (t--){
        int A,B,X,Y;
        cin>>A>>B>>X>>Y;
        if(X*Y>=A*B){
            cout<<"Yes"<<endl;
        }else {
            cout<<"No"<<endl;;
        }
    }
}
