// Here are counting using hash array in C++:
// This code counts and prints how many times each element appears in the array using a hash array.
// It uses a vector to store the frequency of each element, which is more efficient than nested loops.
// The code first finds the maximum value in the array to determine the size of the hash array
// and then counts the occurrences of each element by incrementing the corresponding index in the hash array
// Finally, it prints the elements and their frequencies.
// This approach is more efficient than using nested loops, especially for larger arrays.
// The time complexity is O(n + m), where n is the size of the array and m is the maximum value in the array.
// The space complexity is O(m) for the hash array
// This code is suitable for competitive programming and can handle large inputs efficiently.
// This code counts and prints how many times each element appears in the array using a hash array
// It uses a vector to store the frequency of each element, which is more efficient than nested loops.
// The code first finds the maximum value in the array to determine the size of the hash array
// and then counts the occurrences of each element by incrementing the corresponding index in the hash array
// Finally, it prints the elements and their frequencies.
// This approach is more efficient than using nested loops, especially for larger arrays.
// Me happily share this code with you, and I hope it helps you in your coding journey.
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
    for(int i = 0;i<max+1;i++) {
        if(hash[i]>0){
            cout<<i<<" Element appears "<<hash[i]<<endl;
        }
    }
    cout<<endl;
}
return 0;
}
