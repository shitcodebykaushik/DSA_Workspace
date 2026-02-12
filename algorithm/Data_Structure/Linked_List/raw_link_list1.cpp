#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node*next;
};

int main () {
    Node* head = new Node;
    head->data = 1;
    head ->next= nullptr;


    // Creting the second node 

    Node* Second = new Node;
    Second ->data = 2;
    Second ->next = nullptr;

    // Linking the first node to the second 

    head ->next= Second; 

    // Traversing 

    Node* temp = head;
    while(temp!=nullptr){
        cout<<"The node data is "<<temp->data<<endl;
        temp = temp->next;
    };

};
