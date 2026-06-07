#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    };
    int count = INT_MIN;
    for ( int i = 1; i < n; i++)
    {  
      int frequency = 1;
      for (int j = 0;j<n;j++) {
        if (arr[i] == arr[j] && i != j) {
            frequency++;
        }

      }
        count = max(count,frequency);
    }
    cout<<count<<endl;
}