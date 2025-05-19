#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
  int t;
  cin>>t;
  while(t--){
      int N,X;
      cin>>N>>X;  // INput for the number of the student and the amount if the candy he have .
    if (X>N){
        cout<<"0"<<endl;
    }else {
        int needed = N - X;
        int packets = (needed + 3) / 4; 
        cout << packets << endl;

    }
}
}
