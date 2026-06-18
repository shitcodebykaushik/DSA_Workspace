// Print the frequency of each distinct element . 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
 
void count (vector<int>&nums){
    int n = nums.size();
    unordered_map<int,int>freq;
   for(int i = 0;i<n;i++){
    freq[nums[i]]++;
   }
   for(auto p : freq) {
    cout<<p.first<<"  -> "<<p.second<<endl;
   };
   }

};
int main () {

vector<int>nums = {1,2,3,4,4};
Solution obj;
obj.count(nums);

return 0;
};