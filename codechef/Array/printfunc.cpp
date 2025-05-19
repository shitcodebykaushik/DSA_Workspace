#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size) {
    cout<<"Printing the arry "<<endl;
    // Running loop to print the array 
    for(int i =0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main() {
	// your code goes here
    int data[] = {1,2,3,5};
    printArray(data,4);
  return 0;
}
