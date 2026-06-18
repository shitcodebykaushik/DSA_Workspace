#include<bits/stdc++.h> 
using namespace std;
class Solution {
    public:
    int maxNumberofBalloons(string text) {

        int b = 0, a = 0, l = 0, o = 0, n = 0;
        for(char ch:text){
            if(ch == 'b')b++;
            else if(ch == 'a')a++;
            else if(ch == 'l')l++;
            else if(ch == 'o')o++;
            else if(ch == 'n')n++;
        }
        int ans = 0;
        while(b>=1 && a>=1 && l>=2 && o>=2 && n>=1){
            b--;
            a--;
            l-=2;
            o-=2;
            n--;
            ans++;
        }
        return ans;

    }
};
int main () {
    Solution sol;
    string text = "loonbalxballpoon";
    int result = sol.maxNumberofBalloons(text);
    cout<<"Maximum number of 'balloon' that can be formed: "<<result<<endl;
}