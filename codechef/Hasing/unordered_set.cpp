#include <bits/stdc++.h>
using namespace std;
int main () {

    unordered_set<int> hashMap;
    for(int i = 0;i<10;i++){
        hashMap.insert(1+i); // Storing squares of numbers 0 to 9
    };
     hashMap.insert(8);
    
     // Displaying the elements of the unordered_set
    cout<<"Elements in the unordered_set: ";
    for(const auto& element : hashMap) {
        cout << element << " ";
    }
    cout<<endl;
    return 0;

}