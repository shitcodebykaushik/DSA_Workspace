#include <iostream>
#include <cstdio>
using namespace std ;
int main () {
    int a ;
    a =45;
    cout<<a<<endl;
    int c = a++;
    cout<<c<<endl;
     c = ++a;
    // int c = +++a ; This will give the error as here we are re decaring the c , but as we remove the data type it become not the re declaration  
    cout<<c<<endl;

}