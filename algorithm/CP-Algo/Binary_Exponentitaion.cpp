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
}