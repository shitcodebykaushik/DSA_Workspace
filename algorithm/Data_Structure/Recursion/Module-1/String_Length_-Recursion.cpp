#include <bits/stdc++.h>
using namespace std;

// Compute the length of a null-terminated character array 
// If the first character is '<\0',length is  0 . Otherwise length = 1+length(str+1) .




int stringLenght (const char s[]) {
        // Base case: empty string 

        if (s[0] == '\0') {
            return 0;
        }
        // Recursice case: 1+ lenght of rest 
        return 1 + stringLenght(s+1);
    } ;
int main () {

    char str[] = "hello";
    cout<<stringLenght(str)<<endl;
}