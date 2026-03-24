//Exponentiation by Squaring
//Time Complexity: O(log b) => where b is the exponent
#include <bits/stdc++.h>
using namespace std;
int square (int a,int b) {
        int result = 1; 
        while (b>0){
            if ( b%2 == 1 ){
               result = result * a;
            }
            a =a*a;
            b = b/2;
        }
            return result ;

        
    };
int main () {
    int a = square(3,13);
    cout<<a<<endl;
    int b = square(2,10);
    cout<<b<<endl;
    int c = square(5,3);
    cout<<c<<endl;
    return 0;
}