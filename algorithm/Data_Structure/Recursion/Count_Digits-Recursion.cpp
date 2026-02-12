#include <bits/stdc++.h>
using namespace std; 
// Intution 
// If |n| <10, it has 1 digit. Otherwise it hase 1+countDigits(n/10).

int countDigits(int n) {
    // Make n to positve to similify 

    if(n<0){
        n = -n;

    }

    // Base case 
    if(n<10){
        return 1;
    }

    // Recursion start here 
    int withoutlast = n/10;
    return 1 + countDigits(withoutlast);
};

int main () {
int n = countDigits(4000000);
cout<<n<<endl;
}

// This program demonstarte the use of the recursion to count the number of the digit in the number .
