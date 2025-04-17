#include<bits/stdc++.h>
using namespace std;
int main () {
   int nums[] = {1,2,4,5};
    for(int &x:nums){   // Here we did in place modification .
         x = x+1;
    }
    cout<<nums[1]<<endl;
    // NO inplace modification 
    int copy[]= {1,3,4};
    for (int i:copy){
        i =i+1;
        cout<<"The value with the copy are"<<i<<endl;
    }
    cout<<"The value after loop remain same no change in original array"<<copy[1]<<endl;

}

// This whole is the shorthand for the range based loop where it runs
// for rach value of the x and print it into the terminal . Here we are copy the value .
// If you want to in place the use the reference 
