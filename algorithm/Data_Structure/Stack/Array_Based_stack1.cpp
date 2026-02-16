#include <bits/stdc++.h>
using namespace std;

struct  Stack {
 
    private :
    int top;
    int arr[10];
    public:
    Stack () {    // This is the constructor of the stack which initilize the empty stack 
        top = -1;
    };
    void push (int x) {
        if(top>=9){
            cout<<"Stack Overflow"<<endl;
            return ;
        }else {
            top++;
            arr[top]=x;
        };
    };
   
    void pop (int x) {
        if(top <0) {
            cout<<"Stack Underflow"<<endl;
            return ;
        }else {
            top--;
            arr[top] = x;
            cout<<"Elements poped from stack "<<endl;
        };
    };


    void display (){
        if (top<0){
         cout<<"Stack is empty "<<endl;
         return ;
        }
     else {
        for(int i = top;i>=0;i--){
            cout<<"The  element is " <<arr[i]<< " "<<endl;
        };
    };
};
};
int main () {
 Stack l;
 l.push(1);
//  l.display();l.display();
 l.push(6);
 l.display();


}