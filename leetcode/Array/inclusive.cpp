#include <bits/stdc++.h>
using namespace std;
int main () {
    vector<int> nums = {1, 2, 3, 4, 5};
    int n = 4;
    for(int i =0;i <=n;i++){    // this loop will run from 0 to n inclusive
        cout<<nums[i]<<" ";

    }
    cout << endl;
    for (int i = 0; i < n; i++) {  // this loop will run from 0 to n exclusive
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}