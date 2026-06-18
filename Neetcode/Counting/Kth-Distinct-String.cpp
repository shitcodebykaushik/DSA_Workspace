#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:

    string kthDistinct(vector<string>&arr,int k) {
      int n = arr.size();

      for(int i =0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            k--;
            if(k==0){
                return arr[i];
            }
        }
      }
      return "";
    }
};
int main () {
    
    Solution sol;
    vector<string>arr = {"d","b","c","b","c","a"};
    int k = 2;
    string result = sol.kthDistinct(arr,k);
    if(result.empty()){
        cout<<"No kth distinct string found."<<endl;
    } else {
        cout<<"The "<<k<<"th distinct string is: "<<result<<endl;
    }
}