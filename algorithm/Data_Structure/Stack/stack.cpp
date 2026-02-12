#include <bits/stdc++.h>
using namespace std;
// This is the stl of the stack in c++
// stack is a linear data structure that follows the principle of last in first out (LIFO)
// It is used to store a collection of elements, with two main operations: push and pop
// The push operation adds an element to the top of the stack, while the pop operation removes the top element from the stack
// The stack also provides a top operation to access the top element without removing it, and a size operation to get the number of elements in the stack
// The
int main () {
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // Accessing the top element of the stack 
    cout<<"The top element of th stack is: "<<s.top()<<endl;
        cout<<"The size of the stack is :"<<s.size()-1<<endl;
        if(s.empty()) {
            cout<<"The stack is empty"<<endl;
        }else {
            cout<<"The stack is not empty"<<endl;
        }

}