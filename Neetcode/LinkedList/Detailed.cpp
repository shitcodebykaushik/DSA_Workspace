#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node*next;

    Node(int x) {
    data = x;
    next = nullptr;
    };
};
    class Single {
    public: 
    Node*head;
    Single() {
    head=nullptr;
    };
    void append (int x) {
        Node*new_node = new Node(x);

        if(!head){
            head = new_node;
            return ;
        }
        
        Node*current = head;
        while (current->next!=nullptr){
            current = current->next;
        }
        current->next = new_node;

    };
    void preppend (int x) {
        Node*new_node = new Node(x);
        new_node->next = head;
        head = new_node;
    };
    void display () {
        Node*current = head;
        while (current!=nullptr){
            cout<<current->data<<" -> ";
            current = current->next;
        }
        cout<<"nullptr"<<endl;
    };
    // Delete a node 
    void delethead () {
        if (head==nullptr){
            return;
        }
        Node*temp = head;
        head = head->next;
        delete temp;
    };

    void deleteTail () {
        if(head==nullptr){
            return;
        }
        if(head->next==nullptr){
            delete head;
            head = nullptr;
            return;
        }
        Node*current = head;
        while(current->next->next!=nullptr){
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
       
    }
    };
int main () {
Single s1;
s1.append(5);
s1.append(10);
s1.append(20);
s1.display();
cout<<"After preppending: "<<endl;
s1.preppend(1);
s1.display();

cout<<"After deleting head: "<<endl;
s1.delethead();
s1.display();

cout<<"After deleting tail: "<<endl;
s1.deleteTail();
s1.display();
}