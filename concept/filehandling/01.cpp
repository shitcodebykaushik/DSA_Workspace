#include <bits/stdc++.h>
using namespace std ;
int main () {
    ofstream Myfile("csl.txt");
    Myfile<<"Thala for the reason"<<endl;
    
    ifstream myread ("csl.txt");
    if (Myfile.is_open()){
        string read;
        while(getline(myread,read)) {
         cout<<read<<endl;
        }
    }
}