#include <bits/stdc++.h>
using namespace std;
void pattern_1 (int n) {
    for (int i =0;i<n;i++){
        for (int j =0;j<n;j++){
            cout<<"*";
        }cout<<endl;
    }
}
void pattern_2(int n) {
    for (int i = 0;i<n;i++){
        for (int j=0;j<=i;j++) {
            cout<<"1";
        } cout<<endl;
    }
}
int main () {
    int n =4;
    pattern_2(n);
    pattern_1(n);
    return 0;
    
}