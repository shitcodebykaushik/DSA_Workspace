#include <bits/stdc++.h>
using namespace std;

void printnto1(int n) {
    if(n<=0) {
        return ;
    }
    cout<<n<<" ";
    printnto1 (n-1);
};
int main () {
printnto1(3);
cout<<" The next line "<<endl;
printnto1(10);
}

// The work printing is done before the recursice call -> pre-order processing 
