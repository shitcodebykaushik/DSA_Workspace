/*Given N integers, write a program to print:
middle element if the N odd and is multiple of 3
first and last element(space separated) if N is even and is multiple of 3.
else sum of first and last element.

*/
// Test case 
/*
3
3
1 2 3
6
1 2 3 4 5 6
4 
1 2 3 4
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    std::vector<int>s(n);
    for(int i =0;i<n;i++){
        cin>>s[i];
    }
    // Till here the value is stroed in the vector .
  //  int value =0;
    if(n%2 !=0 && n %3==0){
       cout<<s[n/2]<<endl;
    }else if (n%2==0 && n%3==0){   // first and the last element 
        cout<<s.front()<<" "<<s.back()<<endl;
    }else {
         cout<<s.front()+s.back()<<endl;
         
         
    }
    
}

}