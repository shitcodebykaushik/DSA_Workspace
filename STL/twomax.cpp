#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector <int> v =  {a,b};
    vector <int>t={c,d};
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;
for(int nums:v) {
    if(nums>firstMax){
        secondMax =firstMax;
        firstMax =nums;
    }else if (nums>secondMax && nums != firstMax){
        secondMax = nums;
    }
}
cout<<firstMax+secondMax<<endl;
}
}
