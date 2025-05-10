#include <bits/stdc++.h>
using namespace std;

int main() {    
    int N;
    cin>>N;
    bool divisible = false;
    for(int i = 5;i<=10;i++){
     if(N%i==0){
      cout<<"The number is divisble is by "<<i<<endl;
      divisible = true ;
     }
    }
    cout<<"NOt divisble"<<endl;
    
}
