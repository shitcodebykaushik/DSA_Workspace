// Integer overflow is the case where our value get round off .
#include <bits/stdc++.h>
using namespace std; 

// Iterative approach means to repeat a process or set of steps .Until the specific condition is met .

class solution {
    public :
    int search (vector <int>& nums, int target) {
        int n = nums.size ();
        int low =0,high=n-1;

       while(low <= high) {
        int mid = (low+high/2);
        if (nums[mid] == target) {
            return mid;
        }else if (target > mid) {
            low = mid+1;
        }else if (target <mid) {
            high = mid -1;
        }
       }
       return -1;
    }
};
// This can be solved using the recursive approach .

int main () {
  

}