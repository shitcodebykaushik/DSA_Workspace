#include <bits/stdc++.h>
using namespace std;
// Here we are creating a class named as credit . Class is a user defined data type which
// has data members and member functions . Data members are the variables which are declared inside the class and member functions are the functions which are declared inside the class and operates on the data of that class .
class Credit {
public:
string name;
int balance;
int credit_score;
// Member function 

int cardtype () {
    int a = credit_score;
    if(a>10){
        a=a*100;
        return a;
    }else {
        a=a*10;
        return a;
    }
};

// Here i am declaring the frined function 
friend void showBalance(const Credit& c);

};
// Here we are defining the defination of the function 
void showBalance(const Credit& c) {
    cout << "Balance: " << c.balance << endl;
};

int main () {
    Credit c1;
    cin>>c1.name;
    cout<<"The name of the Customer is " <<c1.name<<endl;
    cin>>c1.balance;
    cout<<"The balance of the Customer is " <<c1.balance<<endl;
    cin>>c1.credit_score;
    cout<<"The credit score of the Customer is " <<c1.credit_score<<endl;
    showBalance(c1);
}