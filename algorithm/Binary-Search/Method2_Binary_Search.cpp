#include <bits/stdc++.h>
using namespace std;
int main () {
vector<int>n = {1,5,9,6};

int k = 0;
for(int b = n.size()/2;b>=1;b/=2) {
   while(k+b < n && v[k+b] <= x) k+=b;
}

if (v[k] == x) {
    // elemenet found .
}