#include<bits/stdc++.h>
using namespace std;
// Qs is based on the problem of checking if a string contains at least one of each character from the set {'a', 'b', 'o', 'v', 'e'}.
// The program reads a string and checks for the presence of these characters, outputting "Yes" if all are present and "No" otherwise.
int main () {
    string s;
    cin>>s;
    int a =0;
    int b =0;
    int o =0;
    int v = 0;
    int e = 0;
    for (char c :s){
        if (c == 'a') a++;
        else if (c == 'b') b++;
        else if (c == 'o') o++;
        else if (c == 'v') v++;
        else if (c == 'e') e++;
    }
    if(a >= 1 && b >= 1 && o >= 1 && v >= 1 && e >= 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}