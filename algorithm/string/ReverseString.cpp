#include <bits/stdc++.h>
using namespace std;

void reversestring (char s[],int size) {
    int left =0;
    int right = size-1;
    while(left<right) {
        // Manual swap 
        char temp = s[left];
        s[left]= s[right];
        s[right]=temp;
        // Move indices toward center 
        left++;
        right--;
    }

};
int main () {
char s[] ="hellp";
int size = 5;
reversestring(s,size);
for(int i=0;i<size;i++){
    cout<<s[i];
};
//cout<<endl;
return 0;
}