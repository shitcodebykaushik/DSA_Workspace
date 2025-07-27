#include <bits/stdc++.h>
using namespace std;

void func( int n1 ) {
   // Example variable
    n1++; // <-- Increment n1 here
    if(n1>=10){
        cout << "Base case reached with n1: " << n1 << endl;
        return; // Base case to stop recursion
    }
    cout << "Data in n1: " << n1 << endl;
    func(n1); // <-- AND you pass n1+1 here
}

int main () {
    func(1);
}