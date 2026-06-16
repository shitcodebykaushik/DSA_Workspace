#include<bits/stdc++.h>
using namespace std;
string reverseString(string s) {
    int n = s.size();
    int i = 0;
    int j= n-1;
    while(i<j){
        swap (s[i],s[j]);
        i++;
        j--;
    }
    return s;
};
class solution {
    public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i =0;
        int j = n-1;
        while(i<j) {
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
    
};
int main () {
    solution s1;
    vector<char>v = {'h','e','l','l','o'};
    s1.reverseString(v);
    for (char x :v) {
        cout<<x<<" ";
};

}