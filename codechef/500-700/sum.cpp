#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t,n;
cin>>t;
while(t--){
    cin>>n;
    int sum = 0;
    while(n>0){
        int digit  = n%10;
        sum += digit;
        n /=10;
    }
    cout<<sum<<endl;
}
}
