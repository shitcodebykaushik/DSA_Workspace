#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main (){
    unordered_map<string,string>fruitype;   // fruittype is the hash table which want the key in the strin format and the value in the string format .  
    fruitype["apple"] = "fruit";   // Here in the hash table we are storing the apple as a key and the fruit as the value into it .
    fruitype["c"] = "animal";  //
    cout<<fruitype["c"]<<endl;  // Here i am accessing the c key from the fruitype hash table and pringting the value associated with it /
    unordered_map<int,int> age ;
    age[45] = 12;
    cout<<age[45]<<endl; //here the output will be the 12 as 45 key indicates to the the value 12 .
    cout<<age[14]<<endl; // here the output will  be zero as no value is assigned .
}