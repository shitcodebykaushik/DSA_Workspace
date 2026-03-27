#include<bits/stdc++.h>
using namespace std; 
void solution () {
    map<int ,int>m;
    int n,q;
    cin>>n>>q;
    while(q--){
        int x;
        cin>>x;
        if(x==1){
          int y ;
        cin>>y;
          m[y]++;
        }
    else{
        int y;
        cin>>y;
        cout<<m[y]<<endl;
    }
}
};
int main () {
    solution();

}