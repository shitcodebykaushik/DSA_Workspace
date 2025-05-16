#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int A,X,B,Y;
    cin>>A>>X>>B>>Y;
    double ALICE = (double)A/X;
    cout<<ALICE<<endl;
    double BOB = (double)B/Y;
    cout<<BOB<<endl;
    if(ALICE>BOB){
        cout<<"Alice"<<endl;
    }else if (ALICE==BOB){
        cout<<"Equal"<<endl;
    }else if (ALICE<BOB){
        cout<<"Bob"<<endl;
    }
}
}
