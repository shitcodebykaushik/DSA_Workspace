#include <bits/stdc++.h>
#include <vector>
using namespace std;
// bbool found = false;
int main () {
    vector<int>nums = {1,2,3,4};
    int n = nums.size();
    int target = 3;
    for(int i = 0;i<n;i++){
    if(nums[i]==target){
        cout<<"Found at " <<i;
       // found = true;
        break;

        }
    }
    

}