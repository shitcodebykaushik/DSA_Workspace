#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t,x,y;
cin>>t>>x>>y;
while(t--){
    cin>>x>>y;
    int disposal = 100*x;
    cout<<disposal<<endl;
    int cloth = 10*y;
    cout<<cloth<<endl;
    if(cloth == disposal){
        cout<<"cloth"<<endl;
    }else if ( disposal>cloth){
        cout<<"disposal"<<endl;
    }else {
        cout<<"cloth"<<endl;
    }
}
}