#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr = {4,8,6,1};
    for(int i =0;i<arr.size();i++){
     for(int j=0;j<arr.size()-1;j++)
       if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
       }
    }
    for(int i =0;i<arr.size();i++) {
        cout<<arr[i]<< " ";
    };

    cout << "Comparison operators" << endl;
    vector<pair<int,int>>v;
    v.push_back({1,2});
    v.push_back({2,3});
    v.push_back({1,2}); 
    sort(v.begin(),v.end());
    
}