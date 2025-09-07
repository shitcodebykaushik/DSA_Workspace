#include<bits/stdc++.h>
using namespace std;
int main () {
    int arr1[4]= {36,21,1,3};
    int arr[4]={1,3,2,5};
    cout<<"Before sorting : "<<endl;
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" " ;
    };
    cout<<endl;
    for(int i=1;i<3;i++){
        for(int j=0;j<=4-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
              ///  int temp = arr[j+1];
              //  arr[j+1]=arr[j];
              //  arr[j] = temp;
            }
        }
    }
    cout<<"After bublle sort "<<endl;
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }

}