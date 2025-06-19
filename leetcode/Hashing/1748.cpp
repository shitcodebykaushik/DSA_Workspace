#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map <int,int> freq; 
        // count the frequecy of each number 
        for(int num:nums){
            freq[num]++;
        }
        int sum = 0;
        // Sum the number that appears exactly once 
        for(auto & [num,count] : freq){
            if(count == 1) {
                sum += num;
            }
        }
        return sum;
    }
};