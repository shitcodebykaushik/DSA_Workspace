#include <bits/stdc++.h>
using namespace std;

// S(9) = n+S(n-1); S(0) = 0;
  int sunNatural(int n) {
        if(n == 0) {
            return 1;
        }else {

            // Recursive case 
            int sumSmaller = sunNatural(n-1);
            return n + sumSmaller ;
        }
    };
int main () {

    int n = sunNatural(5);
    cout<<n<<endl;

  
}