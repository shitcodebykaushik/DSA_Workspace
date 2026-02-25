#include <bits/stdc++.h>
using namespace std;
class DoublyLinkedList {
    private:
    struct Node {
        int data;
        Node* next;
        Node* prev;
        Node (int val) {
            data = val;
            next = nullptr;
            prev = nullptr;
        }
    };
    Node* head;
    public:
    DoublyLinkedList() {
        head = nullptr;
    };
    void insertFront(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    };
    void print() const {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data;
            if (current->next != nullptr)
                cout << " <-> ";
            current = current->next;
        }
        cout << " -> nullptr\n";
    };
    void traversing() const {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    };
};

int main () {
    DoublyLinkedList dll;
    dll.insertFront(10);
    dll.insertFront(20);
    dll.insertFront(30);
    dll.traversing();
    dll.print();
   
}