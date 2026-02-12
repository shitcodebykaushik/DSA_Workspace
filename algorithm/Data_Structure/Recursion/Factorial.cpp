#include<bits/stdc++.h>
using namespace std;
// PrecCondition : n>=0
// Return n! (factorial of n ) 
// Function defined here and it is direct call anf the protoptype of the linear search . Here what we do is that reduce the input by 1 and combine the results .
int factorial (int n) {
    // Base class : 0! = 1;
    if (n <=0) {
        return 1;
    };
    // Recursive case : n! = n*(n-1);
    int  smallerResult = factorial(n-1);
    int result = n*smallerResult;
    return result;
};

int main () {
    int c = factorial(-5);
    cout<<c<<endl;
}