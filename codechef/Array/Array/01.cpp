#include <bits/stdc++.h>
using namespace std;
int func1 (vector<int>a){
    int n = a.size();
    int largest = a[0];
    int secondlarget = -1;
    for(int i =0;i<n;i++){
        if(a[i]>largest){
            largest =a[i];
        }
    };
    return largest;

};
// for sorted array cheking 
int func2 (vector<int>b) {
    int n = b.size();
    for(int i =1;i<n;i++){
      if(b[i]<b[i-1]){
        return false;
      }
    }
        return true;
      };
// Remove duplicated in-place from sorted array 
int func3 (vector<int>&b){
    int n = b.size();
    int temp = b[0];
    for(int i = 1;i<n;i++){
        b[i-1] = b[i];
    }
    b[n-1] = temp;
    return b;
}
int main () {
    vector<int> v = {1, 2 ,3};
    cout<<func2(v);
    
}