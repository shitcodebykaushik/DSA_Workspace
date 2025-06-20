//This code counts and prints how many times each element appears in the array — including duplicates — using nested loops.
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    // Took the input into the array 
    for(int i =0;i<n;i++){
        cin>>arr[n];
    }
    
    for(int i = 0;i<n; i++) {
        int count = 0;
        for(int j = 0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        cout<<count<<" ";
    }
    cout<<endl;
}
}
