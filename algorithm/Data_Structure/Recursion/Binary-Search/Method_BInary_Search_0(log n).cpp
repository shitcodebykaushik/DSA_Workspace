#include <bits/stdc++.h>
using namespace std ;
int main () {

    // In this implementation , the active region is a...b and initially the region is  0...n-1 . The algorithm halves the size of the region at each step, so the time complexity is 0(log n) .


    int arr[8] = {4,5,6,8};
    int target = 8;
    int a = 0;
    int b = 8-1;
    while(a<=b) {
    int k = (a+b)/2;
    if(arr[k]== target) {
        cout<<"Element found :"<<k<<endl;
    }if (arr[k]>target) b = k-1;
    else a = k+1;
    if(arr[k] !=target) {
        cout<<"Element is not there in the given regeion"<<endl;
    }
}
}