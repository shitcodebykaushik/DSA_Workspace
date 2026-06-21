#include<bits/stdc++.h>
using namespace std;
int factorial (int x) {
    if(x==1){
        return 1;
    }
    return x*factorial(x-1);
};
int main () {
    int n=5;
    int t = factorial(n);
    cout<<"The factorial of "<<t<<endl;
};