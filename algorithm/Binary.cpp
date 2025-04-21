#include<bits/stdc++.h>
using namespace std;
int search(vector<int>&nums,int target) {
    int low =0 , high =nums.size()-1;
    //int target;
    while (low<=high) {
        int mid = (low +high)/2;
        if(nums[mid]==target){
          return mid;
        }
        else if (nums[mid]>target){
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}
int main () {
vector <int> j = {47,48,49,60,70,200,300,400,500,600,700,800,900,1000,2000};
int d = 1000;
int c = search(j,d);
cout<<c<<endl;
} 