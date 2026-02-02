#include <bits/stdc++.h>
using namespace std;



int main  () {
    vector<int> j = {47, 48, 49, 60, 70, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 2000};
    // This is for the finding the element in the vector
    int k = 500;
    for (int i=0;i<j.size();i++){
    if(j[i]==k){
        cout<<"Found at "<<i<<endl;
        break;
    }else {
        cout<<"Element not found at "<<i<<endl;
    
        
    }
    };
    
   
}