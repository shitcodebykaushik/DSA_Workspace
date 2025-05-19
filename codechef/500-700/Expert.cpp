#include <bits/stdc++.h>
using namespace std;
// Use the method of the percentage 
// How to calculate the percentage of the any two numbers . 
// (Part/whole)*100;
int main() {
	// your code goes here
   int t;
   cin>>t;
   while(t--){
       double x,y;
       cin>>x>>y;
       double c = (y/x)*100;
       if (c>=50){
           cout<<"YES"<<endl;
       }else {
           cout<<"NO"<<endl;
       }
   }
}
