#include <bits/stdc++.h>
using namespace std ;
int main () {

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<long long>b(n);
    for(int i =0;i<n;i++){
        cin>>b[i];
    };


    sort(b.begin(),b.end(),greater<long long>());
    bool test = true;

    for (int i = 0;i+2<n;i++){
        if(b[i]%b[i+1] != b[i+2]) {
            test = false;
            break;
        }
    }

    if(test){
        cout<<b[0]<<" "<<b[1]<<" "<<endl;
    }else{
        cout<<-1<<endl;

    }
}
return 0;
}