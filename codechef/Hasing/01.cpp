#include<bits/stdc++.h>
using namespace std;
// Desiging the function to count the occurence of the number in costly way 
int func1 (int arr[],int size,int number_to_find){
    int count = 0;
    //loop
    for(int i=0;i<size;i++){
        if(arr[i] == number_to_find){
           count++;
        }
    }
    return count;
};
//
int main () {
 cout<<"This is hashing learning " <<endl;  
 int arr[] ={1 ,2,3,5,8,1,5,1};
 int size = sizeof(arr)/sizeof(arr[0]);
   int number_to_find = 1;
    int count = func1(arr,size,number_to_find);
    cout<<"The number "<<number_to_find<<" occurs "<<count<<" times in the array."<<endl;
   
int n;
cin>>n;
vector<int> arr1(n);
for(int i=0;i<n;i++){
    cin>>arr1[i];
};
// precompute
int hash_table[1000] = {0}; // Assuming numbers are in the range 0-999
for(int i =0;i<n;i++) {
    
    hash_table[arr1[i]]+=1;
}
// query 
int q ;
cin>>q;
while(q--){
    int number ;
    cin>>number;
    // fetch 
    cout<<"The hash value  "<<hash_table[number]<<endl;
    
};

return 0;


}
