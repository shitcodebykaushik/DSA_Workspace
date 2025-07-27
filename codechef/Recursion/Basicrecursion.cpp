#include<bits/stdc++.h>
using namespace std;
void func() {
    cout<<"This is the function func()"<<endl;
    func (); // This is a recursive call to the same function.
}
int main () {
    func();  // Here we are calling the function .
}   