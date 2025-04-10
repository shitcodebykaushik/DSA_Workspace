#include <iostream>
#include <string>
using namespace std ;
int main () {
    int n ,x(0);
    cin>>n;
    string s;
   
    while(n--){
        cin>>s;
        if(s[1]=='+'){    // Key point of learning 
            ++x;
        }else {
            --x;
        }
    }
    cout<<x<<endl;
    return 0;
}
