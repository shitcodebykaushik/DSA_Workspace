#include <bits/stdc++.h>
using namespace std;
int main () {
    unordered_map<int, int> reg;
   for(int i = 0; i < 10; i++) {
       reg[i] = i * 2; // Storing double of the index as value
   }
    // Accessing and printing the values
    for(int i = 0; i < 10; i++) {
        cout << "Key: " << i << ", Value: " << reg[i] << endl;
    }
    cout<<endl;
    return 0;
}