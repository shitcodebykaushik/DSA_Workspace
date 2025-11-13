#include <iostream>
using namespace std ;
// Base Class 
// Every student is the person , So person is the base and student are the derived from the base .
class person {
    public :
    string name;
    int age;

    // This is the member function 
    void displayPerson() {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Here course varaible cant be accessed so no course will come here"<<endl;
    }
};
// Derived class 
class Student :public person {
    public:
    // Extra data member
    string course;

   // Data members 

  /* string name;
   int age;
 
   // Member function 
  /* void final () {
     cout<<"The Students details are "<<endl;
     cout<<"Name:"<<name<<endl;
     cout<<"Age:"<<age<<endl;
   }
*/
 void final () {
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Course: "<<course<<endl;
 }
};


// Main function 
int main () {

// Once the class is created then now create th object from it .

Student s1; 
// Value assigned
s1.name = "Kaushik";
s1.age = 12;
s1.course = "Computer Science";

// Now calling the derived classs member function 
s1.final();

// Now calling the base class member function 

cout<<"The base class function "<<endl;
s1.displayPerson();

}