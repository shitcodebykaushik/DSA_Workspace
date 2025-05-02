#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
    int A, B, C;  // declared variable
    cin >> A >> B >> C;  // took three input .
  
    vector<int> v = {A, B, C};   // stored into the vector array ,
    sort(v.begin(), v.end());    // used stl to the sort the array in the increasing order .
    cout<<v[0]<<endl;   // after sorting we can access each element ffrom the vector through the index number .
    int maxdemand = max (A,C);
    cout<<maxdemand<<endl;
    if(maxdemand<=B){
        cout<<"Yes"<<endl;
    }else {
        cout<<"No"<<endl;
    }
 
    return 0;
}
}
