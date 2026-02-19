#include <bits/stdc++.h>
using namespace std;
// Top means mean the last element that is added to the stack and it is the first element that will be removed from the stack when we pop an element from the stack. The top variable is used to keep track of the index of the top element in the stack. When we push an element into the stack, we increment the top variable and add the element to the array at the index of top. When we pop an element from the stack, we decrement the top variable and return the element at the index of top. The peek function returns the element at the index of top without modifying the stack. The display function prints all the elements in the stack from top to bottom. The isEmpty function checks if the stack is empty by checking if top is less than 0.
// Peak element the element that was added first  .

class Stack {
    private:

    int top;  // This is variable to keep track of the top index of the stack

    int arr[10]; // This is the array that will hold the elements of the stack. The size of the stack is fixed to 10 in this implementation.

    public:

    Stack() {    // This is the constructor of the stack class. It initializes the top variable to -1, indicating that the stack is empty.
        top = -1; // Intialize top to -1 to indicate an empty stack

    };
    
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