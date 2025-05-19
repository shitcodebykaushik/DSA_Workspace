#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int N;
    cin>>N;
    int j = 0;
    while(N>0){
        j =j*10 + N%10;
        cout<<j<<endl;
        N = N/10;
        cout<<N<<endl;
    }
    cout<<j<<endl;
}
return 0;
}
