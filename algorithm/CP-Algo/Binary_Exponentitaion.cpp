//Exponentiation by Squaring
//Time Complexity: O(log b) => where b is the exponent
#include <bits/stdc++.h>
using namespace std;

long long sq (long long  a,long long  b) {
    int result =  1;
    while(b>0){
    if(b%2==1){
        result = result*a;
    }
    a = a*a;
    b = b/2;
    }
    return result;
};
int main () {
   long long  a = sq(2,7896);
    cout<<a<<endl;
    int b = sq(4,10);
    cout<<b<<endl;
    int c = sq(5,3);
    cout<<c<<endl;
    int g = sq(2,7896);
    cout<<g<<endl;
    return 0;
}