#include <bits/stdc++.h>
using namespace std;
int power(int n,int b) {
    if(b==0){
        return 1;
    }
    return 2*power(n,b-1);
}
int count (int n) {
    if(n==0){
        return 0;
    }
    return 1+count(n/10);
}
int main () {
cout<<power(3,2)<<endl;
cout<<count(123);
};