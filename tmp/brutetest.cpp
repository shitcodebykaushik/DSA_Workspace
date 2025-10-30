#include <bits/stdc++.h>
using namespace std;

int median_of_vector(vector<int> v){
    sort(v.begin(), v.end());
    int k = v.size();
    int idx = (k + 1) / 2 - 1; // floor((k+1)/2)-th smallest, 0-based
    return v[idx];
}

int brute(int N, const vector<int>& par){
    vector<vector<int>> adj(N+1);
    for(int i=2;i<=N;i++){
        int p = par[i-2];
        adj[p].push_back(i);
        adj[i].push_back(p);
    }
    vector<int> perm(N);
    iota(perm.begin(), perm.end(), 1);
    int best = 0;
    do{
        vector<int> P(N+1);
        for(int i=1;i<=N;i++) P[i]=perm[i-1];
        int score=0;
        for(int x=1;x<=N;x++){
            vector<int> S;
            S.push_back(P[x]);
            for(int y: adj[x]) S.push_back(P[y]);
            int med = median_of_vector(S);
            if(med==P[x]) score++;
        }
        best = max(best, score);
    } while(next_permutation(perm.begin(), perm.end()));
    return best;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    mt19937_64 rng(123456);
    for(int trials=0; trials<200; ++trials){
        int N = rng()%7 + 2; // 2..8
        vector<int> par;
        for(int i=2;i<=N;i++){
            int p = rng()%(i-1) + 1;
            par.push_back(p);
        }
        int brute_ans = brute(N, par);
        // run solution by invoking compiled sol (06.out) if available
        // but here we just print case for external test harness
        cout<<"N="<<N<<" par:";
        for(int x:par) cout<<x<<" ";
        cout<<" => brute="<<brute_ans<<"\n";
    }
    return 0;
}
