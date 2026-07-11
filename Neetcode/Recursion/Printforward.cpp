#include<bits/stdc++.h>
using namespace std;
// In this printing of the value happens after reaching the base case .
void printforward(int x) {
    if(x==0){
        return;
    }
   
    printforward(x-1);
     cout<<x<<" ";
    
};
// In this printing of the value will happen before reaching the base case .
void f(int n) {
    if(n==0){
        return;
    }
    cout<<n<<" ";
    f(n-1);
};
int main ()  {
printforward(8);
cout<<endl;
f(3);
};