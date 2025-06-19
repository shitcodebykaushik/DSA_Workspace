#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int freq1 [101] = {};
        int freq2 [101] = {};
        int first = 0;
        int second = 0;
        for (int num :nums1){
            ++freq1[num];
        }
        for(int num:nums2){
            ++freq2[num];
        }
        for(int i =0;i<=100;++i){
            if(freq1[i] && freq2[i]){
                first = first + freq1[i];
                second = second + freq2[i];
            }
        }
        return { first, second};

    }
};