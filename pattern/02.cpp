#include<iostream>
using namespace std;
void func (int n1){
for(int i =0;i<n1;i++){
for(int j=0;j<=i;j++){
cout<<"*";
}
  cout<<endl;
}
}
int main () {
func(3);
return 0;
}
