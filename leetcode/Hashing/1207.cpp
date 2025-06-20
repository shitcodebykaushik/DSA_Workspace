#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int ,int>freq;
        for(auto x:arr){
            freq[x]++;
        }
        unordered_set<int>s;
        for(auto x: freq){
            s.insert(x.second);
        }
        return freq.size()==s.size();
    }
};
int main () {
    Solution sol;
    vector<int> arr = {1,2,2,1,1,3};
    bool result = sol.uniqueOccurrences(arr);
    cout << (result ? "True" : "False") << endl; // Output: True
    return 0;
}