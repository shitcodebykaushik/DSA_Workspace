#include <iostream>
#include <cstdint>
using namespace std;

struct {
    unsigned int flag : 1;  // :1 is the number of bits used to store that value , Reserve only 1 bit of memory for flag."

} myBit;
// second struct to store the 
struct {
    unsigned int flag2 : 2;  // reserve 2 bit of memeory so the range herer is 0-3 
} mybit2;

int main () {
    int num = 5;
    cout << "The address of the value is " << &num << endl;
    cout << "The value is " << num << endl;

    int *p = &num;
    cout << "The value is " << (*p)++ << endl;  // Prints 5, then num becomes 6
    cout << "The size is " << sizeof(*p) << endl; // Size of int → usually 4
    cout << "The size is " << sizeof(p) << endl;  // Size of pointer → 8 (on 64-bit)
    cout << "The value is " << num + 2 << endl;   // num was incremented to 6 → output 8

    myBit.flag = 1;
    cout << myBit.flag << endl;  // Output: 1

    myBit.flag = 0;
    cout << myBit.flag << endl;  // Output: 1 again
    mybit2.flag2 = 3;
    cout << mybit2.flag2 << endl;

    cout<<"The size of the whole struct is "<<sizeof(myBit)<<endl;  // this give the size of the whole struct not the one variable only .
}
