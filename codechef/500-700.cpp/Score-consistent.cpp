#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
   while(t--){
       int A,B,C,D;
       cin>>A>>B>>C>>D;
       if(C>=A && D>=B){
           cout<<"POSSIBLE"<<endl;
       }else {
           cout<<"IMPOSSIBLE"<<endl;
       }
   }
}
