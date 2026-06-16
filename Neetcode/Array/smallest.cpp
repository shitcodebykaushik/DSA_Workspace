#include<bits/stdc++.h>
using namespace std;
int secondlarget (int arr[],int n){
int larget =arr[0],secondlarget = -1;
for(int i =0;i<n;i++){
    if(larget<arr[i]){
        secondlarget = larget;
        larget = arr[i];
    }
    else if (arr[i]<larget && arr[i]>secondlarget){
        secondlarget = arr[i];
    }
    
}
return secondlarget;
};





int secondSMALLEST (int arr[],int n){
    int second = arr[0] ,oK = INT_MAX;
    for (int i =0;i<n;i++){
        if(arr[i]<second){
          oK = second;
          second = arr[i];
        } else if (arr[i] != second && arr[i] < oK)
        {
            oK = arr[i];
        }
    }
    return oK;
}







int main () {
    int arr[] = {1,2,3,45,58};
    int c = secondSMALLEST(arr,5);
    cout<<c;
    return 0;
}