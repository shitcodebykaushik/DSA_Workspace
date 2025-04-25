// Implementing linked list mannually 
#include <iostream>
using namespace std;

// Define the structure of a Node
struct Node {
    int data;
    Node* next;

    // Constructor to initialize node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Define the Linked List class
class LinkedList {
private:
    Node* head;  // Pointer to the first node in the list

public:
    // Constructor initializes an empty list
    LinkedList() {
        head = nullptr;
    }

    // Insert a node at the end of the list
    void insert(int value) {
        Node* newNode = new Node(value);  // Create a new node with the given value
        if (head == nullptr) {  // If the list is empty
            head = newNode;  // Make the new node the head
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {  // Traverse to the last node
                temp = temp->next;
            }
            temp->next = newNode;  // Add the new node at the end
        }
    }

    // Display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {  // Traverse and print each node's data
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    // Insert elements into the linked list
    list.insert(10);
    list.insert(20);
  //  list.insert(30);

    // Display the linked list
    cout << "Linked List: ";
    list.display();

    return 0;
}
