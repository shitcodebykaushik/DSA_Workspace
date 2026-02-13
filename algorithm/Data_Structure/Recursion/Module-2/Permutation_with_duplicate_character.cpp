#include <bits/stdc++.h>
using namespace std;
// Given a string that may contains duplicate character print all distince permutations .
// Recursive insight -> Same swap based approch but we must avoid swapping the same character to the same postion more than once . At each recursive level, keep track of which charachter have the already places at position l. We can use a visited-char array (for the current level) or sort the  string first and skip the duplicates .


void permuteUnique(char str[],int l,int r) {
    if(l == r) {
      cout<<str<<'\n';
      return ;
    };

    // Keep track of characters already swapped to postion l 
    bool used[256]= {false};

    for (int i = l;i<=r;++i) {
        // If this character has already been used at this level skip . 
        if (used[(unsigned char)str[i]]) {
            continue;
        }

        used [(unsigned char ) str[i]]=true;

        // Swap 
        char temp = str[l];
        str[l] = str[i];
        str[i] = temp;

        permuteUnique(str,l+1,r);


        // Swap back 
        temp = str[l];
        str[l] = str[i];
        str[i] = temp;
    }

};

int main () {
    char str[] = "AAB";
    int n = 0; while(str[n] != '\0') n++;
    permuteUnique (str,0, n-1);
    return 0;
};


// Recursion tree: At the first level we only swap "A" (first occurence) and "B"; the second 'A' is skipped because used ['A'] is already true .
