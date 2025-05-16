#include <iostream>
#include <algorithm>
using namespace std;
// swap is the two varible operation and it happens in pair 
int main() {
    int a = 11;
    int b = 12;
    

    cout << "The value of a is: " << a << "\n";
    cout << "The value of b is: " << b << "\n";

    swap(a, b);

    cout << "After swapping:\n";
    cout << "The value of a is: " << a << "\n";
    cout << "The value of b is: " << b << "\n";

    return 0;
}
