#include <bits/stdc++.h>
using namespace std;
int fact(int n) {
    if (n == 0) {   // This is the base class 
        return 1;
    };
    int smaller = fact(n-1);  // Recursie call
    int result = n*smaller;  // combine
    return result;
    
};

int main () {
    int ans = fact(5);
    cout<<ans;
    return 0;
};

// Never relpy on deep recursion in CP unless you know the stack limit .
