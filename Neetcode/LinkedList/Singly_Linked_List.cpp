// Solved using the geeks for the geeks 
#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node*next;
    
    // Constructor to initilize the new node with the data 
    
    Node(int new_data) {
        this->data = new_data;
        this->next=nullptr;
    }
};

int main () {

    // Creating the first node which will be the head node .
    Node*first= new Node (12);
    // Created the second node
    first->next = new Node (15);

    // this is the third node 
    first->next->next = new Node (25);
    
    // this is the fourth node 
    first->next->next->next= new Node(32); 
    
    // This is for the circular node 
    first->next->next->next = first;
    Node* temp = first;

    while(temp != nullptr) {
    
        cout<<temp->data<<" ";
        temp= temp->next;
    }
};