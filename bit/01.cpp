#include <iostream>
using namespace std;

int bitwiseDivide(int dividend, int divisor) {
    if (divisor == 0) {
        throw invalid_argument("Cannot divide by zero");
    }

    // Determine the sign of the result
    bool isNegative = (dividend < 0) ^ (divisor < 0);

    // Convert both numbers to positive
    long long a = abs(dividend);
    long long b = abs(divisor);
    long long quotient = 0;

    // Left shift to find the largest multiple
    for (int i = 31; i >= 0; i--) {
        if ((b << i) <= a) {  // Check if (divisor * 2^i) fits in dividend
            a -= (b << i);    // Subtract the shifted divisor
            quotient += (1LL << i); // Add 2^i to quotient
        }
    }

    // Apply sign to the result
    return isNegative ? -quotient : quotient;
}

int main() {
    cout << "43 / 8 = " << bitwiseDivide(43, 8) << endl; 
    cout << "-20 / 4 = " << bitwiseDivide(-200, 4) << endl;  
    cout << "100 / 3 = " << bitwiseDivide(100, 3) << endl;  
    cout << "-50 / 7 = " << bitwiseDivide(-50, 7) << endl;  
    return 0;
}
