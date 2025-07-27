#include <bits/stdc++.h>
using namespace std;
  void solve(){
        set<int> s1;
        for(int i=0;i<5;i++){
            s1.insert(i);
        }
        // Print 
        for(auto it = s1.begin();it!=end(s1);it++){
            cout << *it << " ";
        }
        cout << endl;
    }
int main () {
    set<string>s {
        "apple",
        "banana",
        "cherry"
    };
    // s.erase("banana"); // Example of erasing an element
    // Using iterator   
    cout << "Using iterator:" << endl;
    for(auto it = s.begin();it!=s.end();it++) {
        cout << *it<<endl;
    }
   // Using range-based for loop
    cout << "Using range-based for loop:" << endl;
    for (auto it :s){
        cout<<it<<endl;
    };
   // Example of using a function
    solve();
    return 0;
    


}