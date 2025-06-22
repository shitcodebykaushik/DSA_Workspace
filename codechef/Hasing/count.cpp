//This code counts and prints how many times each element appears in the array — including duplicates — using nested loops.
// Here we iterate over array and count the occurrences of each element by comparing it with every other element in the array.
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
// To optimize the code, we can use a hash map to store the counts of each element.
// This will reduce the time complexity to O(n) for counting occurrences.

