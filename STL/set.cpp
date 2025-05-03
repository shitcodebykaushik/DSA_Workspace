#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        // your code goes here
        std::vector<int>nums= {a,b,c};
        set<int>s(nums.begin(),nums.end());
        
        if(s.size()== nums.size()){
            cout<<"Yes"<<endl;
        }else {
            cout<<"No"<<endl;
        }
    }
	

}
