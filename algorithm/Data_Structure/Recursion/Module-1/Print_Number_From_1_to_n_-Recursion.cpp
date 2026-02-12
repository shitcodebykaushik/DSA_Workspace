#include <bits/stdc++.h>
using namespace std; 
// To print 1..n first print 1..n-1;,then print n .
// Base case: If n==0; do nothing (or if n==1,just print 1 ) .

void print1toN(int n ) {
    // Base case: if n<=0, nothing to print  
    if(n<=0) {
        return  ;
    }
    print1toN(n-1) ;
        cout<<n<<" " ;
    
};
int main () {
print1toN(4);
}

// This demonstrate post-order processing (work after recursion) . Its a common pattern .
// The recursice call happend before printing. This causes the prrinting to happen in the order of returning which gives increasing order .
