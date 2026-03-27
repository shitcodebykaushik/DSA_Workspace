#include <bits/stdc++.h>
using namespace std;
// Set is the stl used to store the unique element in and sorted by defualt .
void solution () {
    int n,m;
    cin>>n>>m;
    set<int>st;
    // insertion of the element 
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    };
    // here is the core logic which is if the that to chek if there is element in the -m to m
    for(int i = -m;i<=m;i++){
        if(st.count(i)==0) {
            cout<<i<<endl;
            break;
        }
    }

};

int main (){
    solution();
}