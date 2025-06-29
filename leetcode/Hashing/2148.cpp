#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        unordered_map<int,string> mapping;
        for(int i = 0;i<n; ++i){
            mapping[heights[i]] = names[i];
        }
        sort(heights.rbegin(),heights.rend());
        for(int i =0; i<n;++i){
            names[i] = mapping[heights[i]];
        }
        return names;
    }
};
int main () {
    Solution sol;
    vector<string> names = {"Mary", "John", "Emma"};
    vector<int> heights = {180, 165, 170};
    vector<string> result = sol.sortPeople(names, heights);
    for (const string& name : result) {
        cout << name << " ";
    }
    cout << endl;
    return 0;
}