#include <bits/stdc++.h>
using namespace std;

class Animal {     // Absract class 
    public:
    virtual void sound ()=0; // pure virtual
};

class Dog:public Animal {
    public:
    void sound() override {
        cout<<"Dog barks"<<endl;
    }
};

class Score {
    public :
    virtual void score  () = 0;
};

class Football : public Score {
    public :
    void score() override {
        cout<<"The cureent score is 12 only"<<endl;
    }
};

int main () {

    Dog d;
    d.sound();

    Football f;
    f.score();

    // Score s;  Here we cant not create the class becuz it contains the pure virtual function .
    //s.score();
    
}

