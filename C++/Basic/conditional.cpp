#include <iostream>
using namespace std ;
int main () {
 //   int marks = 25;
    int marks;
    cin>>marks;

    if (marks <25){
        cout<<"The grade is F"<<endl;
    }else if  (marks >=  25 && marks<=44) {
        cout <<"The grade is E "<<endl;
    }else if (marks >=50 && marks <=59) {
        cout <<"The grade is D"<<endl;
    }else {
        cout<<"He is topper ";
    }

   return  0 ;
} 
// In the curret code there is the several redundant comparison  which can be reduced by using the if else statemen only
