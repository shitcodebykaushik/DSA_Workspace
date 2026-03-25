#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    // Data member of the class 
    int data;
    
    // Another data memeber 
    vector<Node*>children; 
    
    // This is constructor
    Node (int x) {
        data = x;
    }
};

// Function to add child to a node 
void addChild(Node* parent,Node* child) {
    parent ->children.push_back(child);
};


// Function to prints of each node .



int main () {

Node*root = new Node(1);
// Create child notes 
Node*hrsu = new Node(10000);
// Addding child to root node 

root->children.push_back(hrsu);


// Access the children 

cout<<"Root data: "<<root->data<<endl;
cout<<"The child "<<root->children[0]->data<<endl;

}