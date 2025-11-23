#include <bits/stdc++.h>
using namespace std;

class myclass {
    public :   // Access specifier
    int mynum;  // data member/ attributes
    string mystring; // data member

    void getdisplay () {
        cout<<mynum<<endl;
        cout<<mystring<<endl;
    }
};
class Book {
    public:
    string title;
    string author;
    int year;
    void getdisplay() {
        cout<<title<<',';
        cout<<author<<',';
        cout<<year;
    }
};

// Method 

class f1 {
public :
int speed;
string name;
void performance ();
};
// Method outside the class 
void f1::performance() {
 cout<<"The speed is "<<speed<<endl;
 cout<<"The name of the car is "<<name<<endl;
};

// Parameters and the Arguments 

class Uni {
    public :
    int fee;
    string course;
    int total (int paid);
};
int Uni::total(int paid) {
    cin>>paid;
    int c = fee-paid;
    cout<<"The total left fee is "<<c<<endl;
    cout<<"The course is "<<course<<endl;
};
int main () {
   Uni u;
   cin>>u.fee;
   cin>>u.course;
   u.total(0);  // Gave the zero as the cin will work so it will replaced with the 200 and if we dont give any value it will create error as the requirement is one argument .



    myclass s1;
    s1.mynum =45;
    s1.mystring="Kaushik";
    s1.getdisplay();

    // Creating multiple object 

    myclass s2;
    s2.mynum =46;
    s2.mystring= "Sidharth kumar";
    s2.getdisplay();

    // Task 1 
    Book b1;
    b1.title = "Road to heavean";
    b1.author= "Amit Shah";
    b1.year= 2016;
    b1.getdisplay();

    cout<<endl;
    // Method outside the class 

    f1 r1;
    cin>>r1.name;
    cin>>r1.speed;
    r1.performance ();
    cout<<endl;


    // Arguments and Parameter

    

}