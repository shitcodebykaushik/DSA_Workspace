#include <bits/stdc++.h>
using namespace std;

class Stack {
    private:

    int top;  // This is variable to keep track of the top index of the stack

    int arr[10]; // This is the array that will hold the elements of the stack. The size of the stack is fixed to 10 in this implementation.

    public:

    Stack() {    // This is the constructor of the stack class. It initializes the top variable to -1, indicating that the stack is empty.
        top = -1; // Intialize top to -1 to indicate an empty stack

    }
    
    void push(int x) {
        if(top>=9){
            cout<<"Stack Overflow"<<endl;
            return ;
        }else {
            top++;
            arr[top]= x;
            cout<<"Element pushed into stack "<<x<<endl;
        };
    } ;

  
    void pop (int x) {
        if(top<0){
            cout<<"Stack Underflow"<<endl;
            return ;
        }else {
            top--;
            arr[top] =x;
            cout<<"Element popped from stack "<<x<<endl;
        }
    };

    // Function to return the peek element of the stack
    int peek() {
        if(top<0){
            cout<<"Stack is empty"<<endl;
            return -1; 
        }else { 
            return arr[top];
        }
    };
    void  display () {
        if(top<0){
            cout<<"The stack is underlfow"<<endl;
            return ;
        }else {
            for(int i = top;i>=0;i--){
                cout<<arr[i]<<" ";
            };
        };
    };
    //
    bool isEmpty() {
        return (top<0);
    };

};

int main () {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(80);
    cout<<"Top element is "<<s.peek()<<endl;
    s.pop(10);

    cout<<"Diaplying the stack "<<endl;
    s.display();
     return 0;
    s.isEmpty();
}