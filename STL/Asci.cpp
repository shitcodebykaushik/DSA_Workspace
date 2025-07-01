#include <bits/stdc++.h>
using namespace std;
int main () {
    char c = 'c'-'b';
    int i =12;
    //cout<<c<<endl; // This will give the garbage output as it is char in C++ is internally an 8-bit signed integer (unless you use unsigned char) Assigning char c = -8; is valid, but printing it results in a non-printable or junk character If you want to see the numeric value, cast it to int:
    cout << int(c) << endl; // Output: -
    if(int(c)>0){
        cout<<i+c<<endl; // This will print the sum of i and the ASCII value of c
    }
}