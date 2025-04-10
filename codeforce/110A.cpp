#include <iostream>
#include <cstdio>
using namespace std;
int main (){
int n;
cin>>n;
int count =0;
while (n!=0){
    if (n%10==4||n%10==7){
         count= count+1;
    }  n = n/10;
}if (count==4 || count==7) {
    cout<<"Yes";
}else 
{
    cout<<"No";
}return 0;
}
