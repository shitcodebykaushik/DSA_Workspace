#include<bits/stdc++.h>
using namespace std;
// Use the numerical or string data type when u want to return anything 
int factorial (int x) {
    if(x==1){
        return 1;
    }
    // this is the recusrive thought %!=5*4!
    return x*factorial(x-1);
};
// Use void when u want to print something.
void printReverse(int x) {
    if(x==1){
        return ;
    }
    cout<<x<<" ";
    printReverse(x-1);
};
int main () {
    int n=5;
    int t = factorial(n);
    cout<<"The factorial of "<<t<<endl;

    int f = 5;
    printReverse(f);
   

};