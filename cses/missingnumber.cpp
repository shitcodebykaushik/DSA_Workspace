#include <bits/stdc++.h>
using namespace std;
int main () {
    long long t;
    cin>>t;
    long long expected = t*(t+1)/2;
    vector<long long>s(t-1);
    for(long long i=0;i<t-1;i++){
        cin>>s[i];
    };
    long long available = 0;
    for(long long i=0;i<t-1;i++){
       available = available+s[i];
    }
    cout<<expected-available;
}