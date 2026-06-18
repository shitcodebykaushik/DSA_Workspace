#include<bits/stdc++.h>
using namespace std;
class Node {
    public: 
    int data;
    Node*next;

    Node(int d) {
        data = d;
        next = nullptr;
    };
};
Node* reverseList(Node*head) {
    Node*prev = nullptr;
    Node*curr = head;
    while(curr!=nullptr) {
        Node*next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int main () {
Node*first = new Node (12);
first->next=new Node (10);
first->next->next = new Node (15);
Node*temp = first;
while(temp != nullptr) {
    cout<<temp->data<<"->";
    temp = temp->next;
}
cout<<"nullptr"<<endl;
Node*reversedHead = reverseList(first);
temp = reversedHead;
while(temp != nullptr) {
    cout<<temp->data<<"->";
    temp = temp->next;
}
cout<<"nullptr"<<endl;
}