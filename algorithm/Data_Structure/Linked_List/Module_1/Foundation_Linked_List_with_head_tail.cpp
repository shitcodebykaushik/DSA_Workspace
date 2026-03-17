#include <bits/stdc++.h>
using namespace std;
// This is the head to tail which is effienct for the singly linked list .
// 
class Linked {
    private :
    struct Node {
        int data;
        Node*next;
        Node(int val):data(val),next(nullptr) {};


    } ;

    Node*head;
    Node*tail;  // New anchor for the end of the list .

  public:
  Linked() {
    head = nullptr;
    tail = nullptr;

  };

  // This is "Append " (Adding to the END)
  // Now it's super fast O(1) beacuse we have the tail 

  void insertAtEnd(int x) {
    Node* newNode = new Node (x);

  if(head == nullptr) {
   head = newNode;
   tail = newNode;
  }else {
   tail ->next = newNode;
   tail = newNode;

  };

};
 

void print() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
        
        // Verification of pointers
        if(head) cout << "Head is: " << head->data << endl;
        if(tail) cout << "Tail is: " << tail->data << endl;
    };
};
int main () {

    Linked lld;
    lld.insertAtEnd(1);
    lld.insertAtEnd(2);
    lld.insertAtEnd(3);
    lld.print();

}