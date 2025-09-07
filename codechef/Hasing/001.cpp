#include <bits/stdc++.h>
using namespace std;
int main () {
    int arr[5]={1,2,2,4};
    int arr1[4]={0};  // Intilization of zero is not mandatory .
    for(int i=0;i<4;i++){
     arr1[arr[i]] +=1;  // this is the core of the hashing .
    }
    // printing the new hash array where all the ocurrence is there  
    for(int i =0;i<4;i++){
        cout<<arr1[i] << " ";
       
    }
     cout<<" \n";
  // query from the hashing array .
   cout<<"The query of number static way \n";
   cout<<arr1[1]<<endl;
   cout<<arr1[2]<<endl;
   cout<<arr1[3]<<endl;
   cout<<arr1[0]<<endl;
  cout<<"The character hasing code is : -"<<endl;
   // character hashing 
   string S[26] = {"a","b","b","f","d","a","t","r","t"};
   int c[26]={0};
   for(int i=0;i<26;i++){
    char ch = S[i][0];
   int hash_index =ch - 'a';
   c[hash_index]++;
   }
   for(int i=0;i<26;i++){
    char character = 'a' + i;
    cout<<"Character "<< character  <<" occur "<<c[i]<<endl;
   }


}