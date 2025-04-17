#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main () {
    unordered_map<string,int> file;
    file["Kaushik"] = 2;
    cout<<file["Kaushik"]<<endl;
    unordered_map<string,int> cst{{"Kaushik",2}};  // cst{{1,2}} this is the shorthand which means that we have key 1 and value 2 
    cst["Puru"] = 5;
    cout<<cst["Kaushik"]<<endl;

}