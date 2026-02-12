#include <iostream>
using namespace std;

// Define a Node structure
struct Node {
    int data;      // Data part of the node
    Node* next;    // Pointer to the next node
};

int main() {
    // Create the first node (head)
    Node* head = new Node; // Dynamically allocate memory for the first node
    head->data = 1;        // Assign data to the first node
    head->next = nullptr;  // Initialize the next pointer to nullptr

    // Create the second node
    Node* second = new Node; // Dynamically allocate memory for the second node
    second->data = 2;        // Assign data to the second node
    second->next = nullptr;  // Initialize the next pointer to nullptr

    // Link the first node to the second node
    head->next = second;

    // Create the third node
    Node* third = new Node; // Dynamically allocate memory for the third node
    third->data = 3;        // Assign data to the third node
    third->next = nullptr;  // Initialize the next pointer to nullptr

    // Link the second node to the third node
    second->next = third;

    // Traverse and print the linked list
    Node* temp = head; // Temporary pointer to traverse the list
    while (temp != nullptr) {
        cout << "Node data: " << temp->data << endl;
        temp = temp->next; // Move to the next node
    }

    // Free the allocated memory
    temp = head;
    while (temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp; // Free the current node
        temp = nextNode;
    }

    return 0;
}