#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    vector<int>d;
    for(int i = 1;i*i<=n;i++){
        if(n%i==0){
            d.push_back(i);

         if ( i != n/i)
            d.push_back(n/i);   
        }
    }
    for (int x :d) {
        cout<<x<<" ";
    }
    cout<<endl;
    // calculating the sum of the divisors
    long long sum = 0;
    for (int x :d) {
        sum += x;

}
  cout<<sum<<endl;
}