#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    // Pointer to the next node in the doubly linked list 
    Node*next;
    // POinter to the previous node in the doubly linked list
    Node*prev;

    Node(int data1,Node* next1,Node*prev1) {
        data = data1;
        next = next1;
        prev = prev1;

    }
    
    // Constructor when only data is provided 
    Node(int data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }

};

int main () {
    // Intitlaizing the array to create nodes ;

    vector<int>v = {2,5,8,7}; 

    Node *head = new Node(v[0]);
    cout<<"The address of head is "<<head<<endl; 
    cout<<"The data of head is "<<head->data<<endl;
    Node *second = new Node(v[1],nullptr,head);
    head->next = second;  // Linking the first node the second 
    cout<<"The address of second is "<<second<<endl;
    cout<<"The data of second is "<<second->data<<endl;
    cout<<"The data of the second previous node is "<<second->prev->data<<endl;
   
    Node *third = new Node(v[2],nullptr,second);
    second->next = third;  // Linking the second node to third 
    cout<<"The address of the third is "<<third<<endl;
    cout<<"The data id the third is "<<third->data<<endl;
    cout<<"The previous vale ue "<<third->prev->data<<endl;


}