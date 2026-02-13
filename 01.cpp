#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int N;
char x[110];

int main  () {
   scanf("%d\n",&N);
   while(N--){
    scanf("0.%[0-9]..,\n", &x);

    printf("The digits are 0.%s\n",x);
   }
}