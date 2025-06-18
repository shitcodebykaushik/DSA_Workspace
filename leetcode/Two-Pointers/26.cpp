#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int removeDuplicates (vector <int>&nums){
        if(nums.empty()){
            return 0;
        
        }
        int i = 0;
        for (int j =1;j<nums.size();j++){
            if(nums[j]!=nums[i-1]){
                nums[i]=nums[j];
              i++;
            }
        }
        return i;
    }
};
int main () {
    Solution sol;
    vector<int> nums = {2 , 2 ,5 , 57};
    cout << "The original array is: ";
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    cout <<" The length of the array before removing duplicates is: " << nums.size() << endl;
    int newlwngth = sol.removeDuplicates(nums);
    cout << "The length of the array after removing duplicates is: " << newlwngth << endl;
    cout << "The array after removing duplicates is: ";
    for(int i=0;i<newlwngth;i++){
        cout << nums[i] << " ";
    }
}