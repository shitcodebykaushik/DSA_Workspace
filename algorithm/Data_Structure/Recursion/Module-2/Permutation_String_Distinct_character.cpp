#include <bits/stdc++.h>
using namespace std; 

void permute (char str[],int l,int r) {
    // Base case: single character left 

    if (l==r) {
        cout<<str<<"\n";
        return ;
    }
    for(int i= l; i<=r; ++i) {
        // Swap current character with the position l 

        char temp = str[l];
        str [l] = str[i];
        str[i] = temp;

        // Recurse on the remaining substring 

        permute(str,l+1,r);


        // backtrack - swap back 

        temp = str[l];
        str[l] = str[i];
        str[i] = temp;
    }
};
int main () {
    char str[] = "MAC";
    int n = 0;
    while(str[n] != '\0')n++; // length 
    permute (str,0,n-1);
    return 0;


}