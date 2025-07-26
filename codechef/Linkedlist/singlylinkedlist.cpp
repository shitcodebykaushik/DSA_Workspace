#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data ;
    Node*next;
    // Constructor to initialize a node with a value and the set the next pointer to nullptr .
    Node(int val) {
        data = val; //  The value passed into the constructor (which is val) is being copied into the data member of the Node.
        next= nullptr;
    }
};
class LinkedList {
private:
    Node* head;  // Pointer to the first node of the list

public:
    // Constructor to initialize head to nullptr
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the end of the list
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);  // create new node

        if (head == nullptr) {
            // If list is empty, new node becomes head
            head = newNode;
        } else {
            // Traverse to the end and add the node
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Optional: Print list to check
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }
};


int main () {
   
    return 0;
}