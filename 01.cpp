// Source - https://stackoverflow.com/q/79841435
// Posted by Error-42, modified by community. See post 'Timeline' for change history
// Retrieved 2025-12-10, License - CC BY-SA 4.0

#include <array>
#include <iostream>

using namespace std;

array<int, 2> a;

array<int, 2>& f() {
    cout << "f" << endl;
    return a;
}

int g(int const x) {
    cout << "g " << x << endl;
    return x;
}

int main() {
    f() = { g(1), g(2) };
}
