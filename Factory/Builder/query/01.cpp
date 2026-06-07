#include <bits/stdc++.h>
using namespace std;
int main () {
vector<int>arr = {5,2,8,1,9};
// The main goal here is to maintain the left and the right of the array so that in the for loop it compute well 
int l = 0;
int r =3;

int sum = 0;

for(int i =l;i<=r;i++) {
     sum = sum+arr[i];
}

cout<<sum<<endl;

}