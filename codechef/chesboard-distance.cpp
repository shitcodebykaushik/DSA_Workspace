#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>>t;

while(t--){
  int X1,Y1,X2,Y2;
  cin>>X1>>Y1>>X2>>Y2;
    int c = abs(X1-X2);
   // cout<<c<<endl;
    int d = abs(Y1-Y2);
   // cout<<d<<endl;
    int e = max(c,d);
    cout<<e<<endl;
    
}
}
