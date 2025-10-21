#include <bits/stdc++.h>
using namespace std;
int main () {
   // cout<<sqrt(12);
   // Here it follow the rule of the left to right As the operator * / % are in the same table .
   cout<<3*7/2<<endl;
   cout<<7/2*3<<endl;
  

   int a =10;
   int b=3;
   int c= a/b;
   cout<<c<<endl;


   cout<<int(c)<<endl;
   cout<<bool(0.0000000003)<<endl;
int a1 = 5;
int b1 = 3;
int result = a1++ - --b1 + a1--;
//- a++: 5 (increments a to 6 for future use)
//- --b: 2
//- a--: 6 (decrements a to 5 for future use)

//Now, perform the arithmetic:

///5 - 2 + 6 = 9
cout<<result;
}