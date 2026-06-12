#include<bits/stdc++.h>
using namespace std;
long long sumMultiples(long long n,long long k) {
    long long m = (n-1/2);
    return k*m*(m+1)/2;
};
int main () {
  int t;
  cin>>t;
  while(t--) {
    long long n;
    cin>>n;
    long long ans =sumMultiples(n,  3)+sumMultiples(n, 5)-sumMultiples(n, 15);
    
    cout<<ans<<'\n';
    
  }  
}
