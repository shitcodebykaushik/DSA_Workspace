#include <iostream>
using namespace std;

class Animal {          // Abstract class
public:
    virtual void sound() = 0;   // pure virtual function
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows";
    }
};

int main() {
    // Animal a;   ❌ Not allowed (abstract class can't make object)

    Cat c;          // ✔️ Allowed
    c.sound();      // Output: Cat meows
}
