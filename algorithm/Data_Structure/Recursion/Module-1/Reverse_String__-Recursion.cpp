#include <bits/stdc++.h>
using namespace std; 

// Recursive insight 
// Swap the first and last character then recursively reverse the inner substring .
// Base case When start >=end (0 or 1 ) character left nothing to do .

void reverseString(char s[],int start,int end) {
    if(start >=end) {
        return;
    }

// Swapp character at start and end 

char temp = s[start];
s[start] = s[end];
s[end] = temp;

// Recursively revers the inner substring 

reverseString(s,start+1,end-1);
}

int main () {
char str[] = "recursion";
int len = 0;
// finding the length manually 

while (str[len] != '\0') len++;
reverseString(str,0,len-1);
cout<<str<<endl;
return 0;
}