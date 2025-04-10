#include <iostream>
#include <cstdio>
using namespace std ;
int main () {
     int hh,mm;
     hh =12;  // Here i have give one digit only .
     mm =21;
     printf("%02d:%02d\n",hh,mm);   
    do {
        ++mm;
        if(mm==60) {
            ++hh;
            mm=0;
        }if (hh==24){
            hh=0;
        }
    }while (hh%10*10+hh/10!=mm);
    printf("%02d:%02d\n", hh, mm);
    return 0;
}