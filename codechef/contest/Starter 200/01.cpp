#include <bits/stdc++.h>
using namespace std ;
#include <iostream>

int calculateVehicles(int x, int y, int z) {
    int r = z / y;
    int d= (x + r - 1) / r;
    return d;
}
int main () {
    int N,X,Y;
    cin>>N>>X>>Y;
    int e = calculateVehicles(N,X,Y);
    cout<<e<<endl;

}