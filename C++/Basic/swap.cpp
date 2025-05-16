#include<iostream>
using namespace std;
int main (){
    // Here we have used the third temporiaraly varible to demonstrate the swapping method .
  int a = 12;
  int b = 54;
  cout<<a<<b<<endl;
  int temp = a;
  a = b;
  b=temp;
  cout<<"The value after swapping is"<<a<<b<<endl;
}