#include<bits/stdc++.h>
using namespace std; 

int powerLinear(int base,int exp) {
    if (exp ==0) {
        return 1;
    }
    int smaller = powerLinear(base,exp-1);
        return base*smaller;
    }
int main () {
    int c = powerLinear(2,2);
    cout<<c<<endl;

}