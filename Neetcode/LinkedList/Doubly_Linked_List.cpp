#include<bits/stdc++.h>
using namespace std;

class Node {
    public: 
    int data;
    
    // Pointer to point the previous element
    Node*prev;
    // Pointer to point the next element 
    Node*next;
    

    // Constructor 

    Node(int d) {
        data = d;
        prev = nullptr;
        next = nullptr;
    };
};

int main () {

// Creating the first node (head of the list )
Node*first = new Node (12);

// Creating and link the second node .
first->next=new Node (10);
first->next->prev=first;

// Create and link the third node .
first->next->next = new Node (15);
first->next->next->prev= first->next;

// Traverse the list forward and print elements 


Node*temp = first;

while(temp != nullptr) {
    cout<<temp->data;
    if(temp->next!=nullptr) {
        cout<<"<->";
    }
    temp = temp->next;
}
// Bckeward traversal of the list and print elements
cout<<endl;
temp = first;
while(temp->next!=nullptr) {
    temp = temp->next;
}
while(temp!=nullptr) {
    cout<<temp->data;
    if(temp->prev!=nullptr) {
        cout<<"<->";
    }
    temp = temp->prev;
}

return 0;
}