#include <bits/stdc++.h>
using namespace std;
// This is the code for the adjanecy matrix for the undirected graph 
int main () {
    int n,m;
    cin>>n>>m;
    int adj [n+1][n+1]= {0};
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u] =1;
    }
    //print matrix 
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;

}