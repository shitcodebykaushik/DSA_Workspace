#include <bits/stdc++.h>
using namespace std;
class Health {
    public:
    Health () {
        cout<<"May god bless you all"<<endl;
    }
};
// Constructor with the parameter 

class Test {
    public:
    int score;
    string player;
    Test () {}  // this is default construtor
    Test (int x,string y); // this is parametrized constructor 
    void display ();
};

Test::Test(int x,string y ) {
    score = x;
    player = y;
};

void Test::display () {
    cout<<"The score is "<<score<<endl;
    cout<<"The player is "<<player<<endl;
};

// Constructor overloading 
class song {
    public:
    string music;
    int view;


    song () {
        music = "Meow";
        view = 256;
        cout<<"The music is "<<music<<endl;
        cout<<"The view it got "<<view<<endl;
    }

    song (string x,int y){
        music =x;
        view =y;
        cout<<"The music is "<<music<<endl;
        cout<<"The view it got "<<view<<endl;
    }
};
int main () {
    Health h1;
    

    // Calling the Test 

    Test t1;
    t1.score=52;
    t1.player= "Rohit Sharma";
    t1.display();

    // Calling the song with the multiple constructor .
    song s;
    song s1("Yari",45); 

    

}