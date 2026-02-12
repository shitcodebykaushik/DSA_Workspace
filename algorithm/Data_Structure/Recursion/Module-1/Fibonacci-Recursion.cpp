#include<bits/stdc++.h>
using namespace std;

int fib (int n) {

    // Base case 
    if(n==0){
        return 0;
    }
    if(n==1) {
        return 1;
      }
    // Recursice case: F(n) = F(n-1) + F(n-2)
     int prev1 = fib(n-1);
     int prev2 = fib(n-2);
     return prev1+prev2;
}
int main () {
int n = fib(46);
cout<<n<<endl;
};

// The last fib number with this code is 46 with the 31 bit int .
