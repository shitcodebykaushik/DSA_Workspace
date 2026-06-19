#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node*next;

    Node(int x){
        data =x;
        next = nullptr;
    };
  
};
// Defining the single linked list .

class Single {
    public:
     Node*head ;
     Single(){
        head = nullptr;
     }

     // Add a node at the end 

     void append (int val){
        Node*new_node = new Node (val);
   
        if(head==nullptr) {
            head = new_node;
            return;
        };
        Node*current = head;
        while(current->next !=nullptr) {
            current = current->next;
        }
     }


     void display() {
        Node*current = head;
        while (current != nullptr) {
            cout<<current->data<<" -> ";
            current=current->next;
        }
        cout<<"NULL"<<endl;
     }

};


int main () {


    Single s1;
    s1.append(1);
  //  s1.head;
    s1.display();



};