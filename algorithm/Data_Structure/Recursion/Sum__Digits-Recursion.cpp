#include <bits/stdc++.h>
using namespace std; 

// Recursive insight 
// suMDigit(n) = (n%10) + sumDigits (n/10), base case n = 0 return 0

int suMDigit(int n ) {
    // Make postive 
    if(n<0) {
        n = -n;

    }
    if (n == 0) {
        return 0;
    }
    // last digit + sum of remaining digits 
    int lastDigit = n % 10;
    int remaining = n/10;
    return lastDigit + suMDigit(remaining) ;
}

int main () {

    int  n = suMDigit(125);
    cout<<n;


}