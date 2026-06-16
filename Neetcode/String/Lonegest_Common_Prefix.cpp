// Longest Common Prefix
#include <bits/stdc++.h>
using namespace std;

// Using the & operator means we pass by reference, avoiding a costly copy of the vector.
string longestCommonPrefix(vector<string>& s) {
    if (s.empty()) {
        return ""; // Return an empty string, not a space
    }
    
    string ans = ""; // Start with a completely empty string

    // Loop through each character of the first string
    for (int i = 0; i < s[0].size(); i++) {
        char ch = s[0][i]; // FIX: Use 'i' instead of hardcoded '1'

        // Check this character against the same position in all other strings
        for (int j = 1; j < s.size(); j++) {
            // If the current string is shorter than 'i', or characters don't match
            if (i >= s[j].size() || s[j][i] != ch) {
                return ans; // Return whatever prefix we've successfully built so far
            }
        }
        
        // FIX: Only append to 'ans' AFTER confirming it matches in ALL strings
        ans = ans + ch; 
    }
    
    return ans;
}

int main () {
    vector<string> s = {"flower", "flow", "flight"};
    string ans = longestCommonPrefix(s);
    cout << "Longest Common Prefix: " << ans << endl; // Output will be "fl"
    return 0;
}