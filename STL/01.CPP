#include <algorithm>
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std ;
int main () {
    vector<int>nums = {1,20,3,4,6};
    sort(nums.begin(),nums.end());
    for (int x:nums){
    cout<<x<<endl;
}
}