#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node*next;

    Node (int x) {
        data=x;
        next=nullptr;
    }
};
int main () {
    Node*first= new Node (5);
    first->next=new Node(7);
    first->next->next=first;

    Node*temp = first;
    do {
        cout<<temp->data<<" ";
        temp = temp->next;
    }while (temp != first);
    
}