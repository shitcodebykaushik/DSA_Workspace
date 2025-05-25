#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int n = s.size();
        int firstClose = 0;
        while (firstClose < n && s[firstClose] == '(') 
            firstClose++;

       
        bool canBreak = false;
        for (int i = firstClose + 1; i < n; i++) {
            if (s[i] == '(') {
                canBreak = true;
                break;
            }
        }

        cout << (canBreak ? "YES\n" : "NO\n");
    }
    return 0;
}
