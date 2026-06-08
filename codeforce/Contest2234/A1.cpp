#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        
        multiset<long long> s;
        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            s.insert(x);
        }
        
        auto itr = s.end();
        --itr;
        long long first = *itr;
        s.erase(itr);
        
        itr = s.end();
        --itr;
        long long second = *itr;
        s.erase(itr);
        
        vector<long long> res;
        res.push_back(first);
        res.push_back(second);
        
        long long prev2 = first, prev1 = second;
        bool ok = true;
        
        while(!s.empty()) {
            long long nxt = prev2 % prev1;
            if(nxt == 0) {
                ok = false;
                break;
            }
            auto it = s.find(nxt);
            if(it == s.end()) {
                ok = false;
                break;
            }
            s.erase(it);
            res.push_back(nxt);
            prev2 = prev1;
            prev1 = nxt;
        }
        
        if(ok && (int)res.size() == n) {
            cout << first << " " << second << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}