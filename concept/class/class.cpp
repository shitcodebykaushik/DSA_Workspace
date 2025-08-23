#include <bits/stdc++.h>
using namespace std;
class Credit {
    public:
    string Name;
    int Balance;
    int Credit_score;
    //Designing the member function here . As member function operates on the data of that class.
    int cardtype (){
        int a = Credit_score;
        if(a>10){
            a=a*100;
            return a;
        }else  {
           a=a*10;
           return a;
        }
    };
    //Here we declare the frined function inside the class
    friend void showBalance(const Credit& c);
 
};
   // Here we do the defination of the function .
  void showBalance(const Credit& c) {
    cout << "Balance: " << c.Balance << endl;
}
int main () {
    Credit c1; // Object of the class is known as the instance of the class . C1 is the instance of the class here .
    cin>>c1.Name;
    cout<<"The name of the Customer is " <<c1.Name<<endl;
    
    cin>>c1.Balance;
    cout<<"The available balance is "<<c1.Balance<<endl;;


    cin>>c1.Credit_score;
    cout<<"The Credit score is "<<c1.Credit_score<<endl;

    // Calling the memeber function 
    cout << "Card type value: " << c1.cardtype() <<" calculated as per policy" << endl;

    showBalance(c1);
    
    
}
