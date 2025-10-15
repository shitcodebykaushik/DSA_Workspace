#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int N;
    cin>>N;
    if(N%2==0){
        cout<<(N/2)<<endl;
    }else {
        cout<<(N/2+1)<<endl;
    }
}
}
