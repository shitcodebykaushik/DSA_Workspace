#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main () {
    stack<int>t;
    t.push(5);
    t.push(6);
    t.push(78);  // This is the last element push . into the stack and it will the in the begining of the stack
  //  cout<<t<<endl;  // c++ doesnt allow to print the whol container directly .
    while(!t.empty()) {
        cout<<t.top()<<"";
        t.pop ();
    }
    return 0;
}