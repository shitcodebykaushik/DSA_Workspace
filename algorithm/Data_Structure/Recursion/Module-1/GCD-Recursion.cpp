#include <bits/stdc++.h>
using namespace std;
// Computer the greated command divisor  (GCD) of two integers a and b 
// gcd (a,b) = gcd(b,a%b), gcd(a,0) = |a| .

// By convention we treat gcd(0,0) as 0, even though it is not mathematically defined.
int gcd (int a,int b) {
    if(b==0) {
        return (a<0) ? -a : a;
    }

// Recursive case 

return gcd (b,a % b);

}
int main () {

    int n  = gcd(48,18);
  cout<<n<<endl;

}