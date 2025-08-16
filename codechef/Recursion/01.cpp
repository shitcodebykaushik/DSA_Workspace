#include <bits/stdc++.h>
using namespace std;
int func (int n) {
 if(n==0){
    return 1;
 } 
 return n * func(n-1);
};
// This function prints "Kaushik" n times and returns 1 when n exceeds m
int func2 (int n,int m) {
    if(n>m) {   // base case: if n is greater than m, we stop the recursion
        return 1;
     }else {
        cout<<"Kaushik"<<endl;
        return func2(n+1, m); // here we are calling the function recursively and updating the value of n and m 
     }
};
int func3 (int i) {
    if(i==0){
        return 0;
    }else {
        cout<<i<<endl;
        return func3(i-1); // here we called the function recurively and updated the value of the i 
    }
};
int fun4(int n){
    if(n==0){
        return 0;
    }else {
        return n+fun4(n-1);
    }
};
void fun5(int n,int i){


    if(i==n){
        return ;
    }else {
        cout<<i<<endl;
        fun5(n,i+1);
    }

};
// Iterative method to calculate the sum of an array
int func6 (int n,int arr [],int sum) {
    if(n<0){
        return 0;
    }else  {

        for(int i =0;i<n;i++) {
            sum += arr[i]; // here we are adding the elements of the array to the sum variable
        }
        return sum; // finally we are returning the sum of the array
       
    }
}

int main () {

  //  cout<<"The factorial of 5 is \n "<<func(5)<<endl;
  //  cout<<"The second function output \n"<<func2(1, 5);
  //  cout<<func3(5)<<endl; 
  // cout<<fun4(5)<<endl; // This will print the sum of numbers from 1 to 5
  // fun5(5,1); // This will print the sum of numbers from 1 to 5
   // int arr [] = {1,2,3,4};
   // int n = sizeof(arr)/sizeof(arr[0]); // calculating the size of the array
   // int sum = 0;
   // sum = func6(n, arr, sum); // calling the function to calculate the sum
   // cout<<"The sum of the array is "<<sum<<endl; // printing the sum of the array
  
   
   return 0;
}   

