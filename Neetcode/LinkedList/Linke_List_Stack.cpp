#include<bits/stdc++.h>
using namespace std;
// Node class for linked list
// Making it for stack implementation
class Node {
    public:
    int data;
    Node*next;
    Node(int x) {
    data = x;
    next = nullptr;
    };

};
class Stack {
    public:
    Node*top;
    Stack() {
        top = nullptr;
    };
    void push (int x) {
        Node*head = new Node (x);
        head->next=top;
        top = head;
    };
    void pop () {
        if(top == nullptr){
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node*temp = top;
        top = top->next;
        delete temp;
    };
    void  display () {
        Node*current = top;
        while(current != nullptr) {
            cout<<current->data<<" -> ";
            current = current->next;
        }
        cout<<"nullptr"<<endl;
    }

};
int main () {
Stack s1;
s1.push(10);
s1.push(20);    
s1.push(30);
s1.display();
cout<<"After popping: "<<endl;
s1.pop();
s1.display();
}