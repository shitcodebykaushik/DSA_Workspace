#include <bits/stdc++.h>
using namespace std;
int getMax(int arr[],int n){
    int max = INT_MIN;
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[],int n){
    int min = INT_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main() {
	// your code goes here
    int data [6]= {1,5,-6,70,8,9};
    cout<<"The maxium value is " <<getMax(data,6)<<endl;
    cout<<"The minium value is " <<getMin(data,6);

   
  return 0;
}
