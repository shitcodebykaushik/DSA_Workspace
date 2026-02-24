#include <bits/stdc++.h>
using namespace std;

class Linked {
    private :
    
    struct Node {
    
        int data;
        Node*next;

        Node (int val){
            data = val;
            next = nullptr;
        };

    };
    Node*head;
    public:
    Linked() {
        head = nullptr;
    };
    
    bool isEmpty() const {
        return head == nullptr;
    };

    void insertfront (int val) {
        Node*newNode = new Node (val);
        newNode ->next = head;
        head = newNode;
    };
   // Printing the Linked list 

   void print () const {
    Node*current = head;
    while(current != nullptr) {
        cout<<current->data;
        if(current->next !=nullptr) 
        cout<<" ->";
         current = current ->next;

        };
      //  cout<<" -> nyllptr\n";
    }
    
};
int main () {
    Linked list;
    list.insertfront(5);
    list.insertfront(6);
    list.insertfront(4);
    list.print();
    

}