#include <bits/stdc++.h>
using namespace std ;
// Check if  given string is a palindrome (reads same forward and backward ) 
// length <=1->true .
// first character equals last character and the substring excluding first and last is palindrome .

bool isPlindrome (const char s[], int start,int end) {
    if(start >=end) {
        return true;
    }
    if (s[start] != s[end]){
        return  false ;
    }
    return isPlindrome (s,start+1,end-1);
}
int main () {
char str1[] = "racecar";
int len1 =0; while (str1[len1] != '\0') len1++;
cout<<isPlindrome(str1,0,len1-1)<<endl;













}