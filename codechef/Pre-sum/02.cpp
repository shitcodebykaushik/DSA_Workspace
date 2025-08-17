#include <bits/stdc++.h>
using namespace std;
int func1 (int a[],int n){
    int pre[n]{};
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            pre[i] =pre[i] + a[j];
        }
    }
    return pre[n-1];
};
// Optimized version of the above code
int func2 (int b[],int n){
    if(n<0){
        return 0;
    }
    int pre[n];
    pre[0]= b[0];
    for(int i =1;i<n;i++){
        pre[i]=pre[i-1] + b[i];
    }
    return pre[n-1];
};
int main () {
   int n1;
   cin>>n1;
   int arr1[n1];
   for(int i=0;i<n1;i++){
    cin>>arr1[i];
   }
    int pre[n1]{};
    for(int i=0;i<n1;i++){
        for(int j=0;j<=i;j++){
            pre[i] = pre[i] + arr1[j];
        cout<<pre[i]<<" ";
        }
        cout<<endl;
    };
    // Imporatant learning the size matter .
    int n=5;
    int ar[n]={1,2,3,4,5,6};
    cout<<"The prefix sum of the array is: "<<func2(ar,n)<<endl;
}