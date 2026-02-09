#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next; 
    
    // This is a parameterized constructor of the Node class which takes two parameters: an integer data1 and a pointer to the next node next1. It initializes the data member with data1 and the next pointer with next1.
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    // This is another constructor of the Node class known as a overloaded constructor. It takes only one parameter, an integer data1, and initializes the data member with data1 while setting the next pointer to nullptr, indicating that it is the last node in the linked list.
    Node(int data1) {
        data = data1;
        next = nullptr;


    }
};

int main () {
    vector<int>v = {2,5,8,7};

    // Creating the first node 
    // See the core logic here is that A new node is created with data = v[0] (value 2) and next = nullptr.
    // The pointer y stores the memory address of this node.
    Node*y = new Node(v[0],nullptr);
    cout<<"The address of y is "<<y<<endl;
    cout<<"The data of y is "<<y->data<<endl;
     

    // Now we are creating the second node and we gave the value v[1] (value 5) and now the pointer x stores the memory address of this node . And we passed the pointer `y` so that the x->next will point to the node created by y and this is how we are linking the nodes together in a linked list.  
    Node*x  = new Node(v[1],y);
    cout<<"The address of x is "<<x<<endl;
    cout<<"The data of x is "<<x->data<<endl;
    cout<<"The next of x is "<<x->next<<endl;


    // MUltiple nodes can be created and all can be pointed toward the single node also that possible .

    // Similarly, we create the third node with value v[3] (value 7) and link it to the node created by y.
    Node*z = new Node(v[3],y);
    cout<<"The address of z is "<<z<<endl;
    cout<<"The data of z is "<<z->data<<endl;
    cout<<"The next of z is "<<z->next<<endl;
}