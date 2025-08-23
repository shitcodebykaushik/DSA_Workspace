#include<bits/stdc++.h>
using namespace std;
// Declaration and this will not allocate any meemory .
struct student {
    int Roll;
    string Name;
    int Class;
};
int main () {
    // Defination 
    student S1; // This is the object creation which is type of defination .
     // here S1 create the obect (varaible) of the student so when we call the  S1 then it can access all the member of the struct .
     //This object is a specific, concrete instance of the student structure, and it occupies memory.
    cout<<"Enter tha name of the class "<<endl;
    cin>>S1.Class;
    cout<<"The section he belong to is   "<<S1.Class<<endl;
  
    cout<<"Enter the name of the Roll number "<<endl;
    cin>>S1.Roll;
    cout<<"The Roll number he has provided is  "<<S1.Roll<<endl;

    cout<<"Enter your name "<<endl;
    cin>>S1.Name;
    cout<<"The given Name is "<<S1.Name<<endl;

    return 0;

}