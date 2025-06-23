// This count the frequencies of elements in an array using a hash array. and fills the array with the frequencies of each element.
// with the index of the hash array representing the element itself. 
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    // size of the array 
    int n ;
    cin>>n;
    int arr[n];
    // Input in the array 
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    // max value of the array 
    
    int max=arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max =arr[i];
        }
    }
    // vetctor for hash array 
    vector<int> hash ( max+1,0);
    // entry 
    for(int i = 0;i<n;i++){
        int value = arr[i];
        hash[value] = hash[value]+1;
    }
    
    // count the frequencies 
    for(int i = 0; i < n; i++) {
            cout << hash[arr[i]] << " ";
        }
        cout << endl;
    }
return 0;
}
