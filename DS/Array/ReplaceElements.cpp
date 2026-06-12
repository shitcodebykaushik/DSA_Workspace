#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
         int n = arr.size();

         int greatestOnRight = -1;

         for(int i = n-1;i>=0;i--){
            int currentElement = arr[i];
            arr[i] = greatestOnRight;


            if (currentElement > greatestOnRight) {
                greatestOnRight = currentElement;
            }
         }
         return arr;
    }
};
int main () {
    
}