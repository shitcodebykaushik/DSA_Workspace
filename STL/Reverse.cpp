#include<bits/stdc++.h>
using namespace std;
int main (){
    // This program demonstrates the use of the reverse function in C++ with the in place .
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    // Original array
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    reverse(nums.begin(),nums.end());
    // Print the reversed array
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout << endl;
    // Reversing the array with the  the indexes 2 to 5;
    reverse(nums.begin()+2,nums.end()-1);
    // Print the partially reversed array
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    // Begin things 
    cout << endl;
    cout<< "Reversing the first 3 elements:" << endl;
     reverse(nums.begin(),nums.begin()+3);
     for(int i = 0;i<nums.size();i++){
        cout<<nums[i]<<" ";
     }
    cout << endl;
    return 0;
}