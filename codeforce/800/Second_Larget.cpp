#include <bits/stdc++.h>
using namespace std;
int main () {
    int size ;
    cin>>size;
    vector<int>arr(size);
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    };

    // Algorithm to find the largest element in the array 
    int larget = 0;
    for (int i = 0;i<size;i++){
        if(arr[i]>larget){
            larget = arr[i];
        }
    }
    cout<<larget<<endl;


    // Algorithm to find the second largest element in the array
    int second_larget = 0;
    for (int i = 0;i<size;i++){
        if(arr[i]>second_larget && arr[i]<larget) {
            second_larget = arr[i];
        }
    }
    cout<<second_larget<<endl;


    // Algo for the third largest 
    int third = 0;
    for(int i = 0;i<size;i++){
        if(arr[i]>third && arr[i]<second_larget){
            third = arr[i];
        }
    }
    cout<<third<<endl;
}