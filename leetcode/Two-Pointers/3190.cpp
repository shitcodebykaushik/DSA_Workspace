#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main () {
    vector<int> nums = {3,6,9};
    int c = 0;
    for (int i=0;i<nums.size();i++){
        if (nums[i] %3 !=0){
            c++;
        }
    }
     cout<<c<<endl;
    return c;
 cout<<c<<endl;
}