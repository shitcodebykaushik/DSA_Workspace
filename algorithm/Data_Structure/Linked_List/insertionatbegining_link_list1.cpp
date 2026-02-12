#include <iostream>
using namespace std;

// Define a node in the linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize the node
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Function to insert a new node
// at the beginning of the list
Node* insertAtFront(Node* head, int x) {
    Node* newNode = new Node(x);
    newNode->next = head;
    return newNode;
}

void printList(Node* head) {
    Node* curr = head;

    while (curr != nullptr) {
        cout << curr->data;
        if (curr->next != nullptr) {
            cout << " -> ";
        }
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    // Create the linked list 2->3->4->5
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    // Insert a new node at the front of the list
    int x = 1;
    head = insertAtFront(head, x);

    printList(head);

    return 0;
}