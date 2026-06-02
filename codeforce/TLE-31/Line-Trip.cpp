#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


   int t;
   cin>>t;

   while(t--){
    int n,x;
    cin>>n>>x;
    vector<int>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    };
    int d =s[0]-0;
    
    for(int i =1;i<n;i++){
        d = max(d,s[i]-s[i-1]);
    }
    d = max(d,2*(x-s[n-1]));
    cout<<d<<endl;

   }
   return 0;
}