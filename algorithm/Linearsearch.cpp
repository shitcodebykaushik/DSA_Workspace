#include <iostream>
#include <cstdio>
using namespace std ;

int search (int array[],int x,int n) {
  for (int i =0;i<n;i++) {
    if(array[i]==x){
        return i;
    }
  }
  return -1;
}


int main () {
int array[]= {1,2,3,4};
int x =3;
int n = sizeof(array)/sizeof(array[0]);
int result = search(array, x, n);  
cout << result << endl;  
}