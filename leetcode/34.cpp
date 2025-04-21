#include <bits/stdc++.h>
#include <vector>
using namespace std;
int search(vector<int>&nums){
int low = 0, high = nums.size()-1;
while (low<high){
    int mid = (low+high)/2;
    if(nums[mid]<nums[mid+1]){
        low = mid+1;
    }else {
        high = mid;
    }
}
return low ;
}
int main () {
vector<int> j = {1,2,1,3,4};
int c = search(j);
cout<<c<<endl;
}