#include <bits/stdc++.h>
using namespace std;
// Writing function for the prime .
bool isPrime(int n){
    if(n<=1)
    return false;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main() {
	
int t,n;
cin>>t;
while(t--){
    cin>>n;
    if(isPrime(n)){
        cout<<"Yes"<<endl;
    }else {
        cout<<"No"<<endl;
    }
}
}
