#include <bits/stdc++.h>
using namespace std;
int main () {
    unordered_map<string,int> fruitprice;
    fruitprice["Banana"] = 25;  // here the banana is the key and 25 is the value
    cout<<"The price of the banana is: "<<fruitprice["Banana"]<<endl;
    // Check if the key exit or not .
    if(fruitprice.count("Bananaaa")){
        cout<<"The key 'Banana' exists in the map."<<endl;
    }else {
        cout<<"The key 'Banana'doesnt exit in the map."<<endl;
    }
}