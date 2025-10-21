#include <bits/stdc++.h>
using namespace std;
int main  () {
    string name = "Kaushik";
    string name2 = "Aman";
    cout<<(name > name2)<<endl; // returns 1 if name is greater than name2 else 0
    cout<<(name < name2)<<endl; // returns 1 if name is less than name2 else 0
    cout<<(name == name2)<<endl; // returns 1 if name is equal to name2 else 0
    cout<<name.substr(1,3)<<endl;
    return 0;
}