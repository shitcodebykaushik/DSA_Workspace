#include <bits/stdc++.h>
using namespace std;

// This is the class with the name of the linked list
class LinkedList  {

    private:
   // Inside the class we have define the nested list .
   // This is the blueprint , this is just defination, it tell the computer , If a ever creates node this is what should it should look like and at this point it doesnt create any memory yet .
   struct Node {
        // Here we have the two data member of the node .
        // This stores the actual value in it .
        int data; 
        // This is the link means that it stores the memory address of the another node .
        Node* next;
        // This is the constructor 
        Node (int val) {
            data = val;
            next = nullptr;
        }
    // We dont have the head inside struct node becuz every single node would carry its own head pointer 
    };

    // This is the actual member varaible of the class linked list here 
    // By putting it in the linkedlist class it means One list = One head no matter how many nodes we add the link list object only need to keep the track of that one head pointer ,
    Node*head;
    public :
    // Constructoe 
    LinkedList() {
         head = nullptr ; 
        } 
        // Check if the list is empty 
        bool isEmpty() const {
            return head == nullptr;
        };
        // Insertion at the front of the linked list 
        void insertFront (int val) {
            Node* newNode = new Node (val);
            newNode->next=head;
            head = newNode;
        };

        // Insertion at the back of the linked list
        void insertBack (int val) {
            Node* newNode = new Node (val);
            if (isEmpty()) {
                head = newNode;
                return;
            }
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        };
        
        // This will delete the front node of the linked list and update the head pointer to the next node in the list. If the list is empty, it will print a message indicating that there is nothing to delete.
        void deleteFront() {
            if (isEmpty()) {
                cout<<"List is empty, nothing to delete\n";
                return;
            }
            Node* temp = head;
            head = head->next;
            delete temp;
        };
        // This is the deletion at the back of the linked list .
        void deleteBack() {
            if (isEmpty()) {
                cout<<"List is empty, nothing to delete\n";
                return;
            }
            if (head->next == nullptr) {
                delete head;
                head = nullptr;
                return;
            }
            Node* current = head;
            while (current->next->next != nullptr) {
                current = current->next;
            }
            delete current->next;
            current->next = nullptr;
        };
    
    // Insertion at the  any position in the linked list
    void insertAtPosition(int val, int position) {
        if (position < 0) {
            cout<<"Invalid position\n";
            return;
        }
        if (position == 0) {
            insertFront(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* current = head;
        for (int i = 0; i < position - 1 && current != nullptr; i++) {
            current = current->next;
        }
        if (current == nullptr) {
            cout<<"Position is out of bounds\n";
            delete newNode;
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
    };



    // Deletion at any position in the linked list 
    void deleteAtPosition(int position) {
        if (position < 0) {
            cout<<"Invalid position\n";
            return;
        }
        if (position == 0) {
            deleteFront();
            return;
        }
        Node* current = head;
        for (int i = 0; i < position - 1 && current != nullptr; i++) {
            current = current->next;
        }
        if (current == nullptr || current->next == nullptr) {
            cout<<"Position is out of bounds\n";
            return;
        }
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    };

    // This is printing the linked list .
    void print() const {
        Node*current = head ;
        while(current != nullptr) {
            cout<<current->data;
            if(current->next != nullptr)
            cout<<" ->";
                current = current ->next;
            }
            cout<< " -> nullptr\n";
        };

};

int main () {

    // The linked depends upon the both lifo and the fifo as it depends upon you intirely that what u want to insert wheather insertion in front (head) or insertion at the tail which is back .
    LinkedList list;
    list.insertFront(6);
    list.insertFront(5);
    list.insertBack(7);
    list.insertAtPosition(4, 2); // Insert 4 at position 2 
    list.print();
    list.deleteAtPosition(2); // Delete at position 2
    list.print();
};

