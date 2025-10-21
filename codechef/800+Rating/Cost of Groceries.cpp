#include <bits/stdc++.h>
using namespace std;
int main () {
int t;
cin>>t;
while (t--) {
    int N,X;
    cin>>N>>X;
    vector<int>fress(N);
    vector<int>cost(N);
    // Entry for the fress
    for(int i =0;i<N;i++){
        cin>>fress[i];
    }
    // Entry for the cost 
    for (int i =0;i<N;i++){
        cin>>cost[i];
    }

    // Select the element  which are higher then the minium freshness 
    int cost1 = 0;
    for (int i =0;i<N;i++){
        if(fress[i]>=X) {
            cost1 += cost[i];
        }
    
    }
   cout<<cost1<<endl;

}
}