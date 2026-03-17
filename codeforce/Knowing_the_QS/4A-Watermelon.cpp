// Watermelon the goal is to check if a watermelon can be divide into two parts 
// each weighs is a positve even number 

// Logic: Any even number greater than 2 can be split into two even numbers. The only even number that fails is  2 .
#include <bits/stdc++.h>
using namespace std;
int main () {
    int w;
    cin>>w;
    if(w%2==0 && w!=2) {
        cout<<"YES";
    }
    else {
        cout<<"No";
    }
}