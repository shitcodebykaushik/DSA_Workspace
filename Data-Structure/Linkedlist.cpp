#include <iostream>
using namespace std;

// Define the structure of a Node
struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Define the Linked List class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insert a node at the end
    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    // Insert at beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insert at specific position
    void insertAtPosition(int pos, int value) {
        if (pos <= 0) {
            cout << "Invalid position!" << endl;
            return;
        }
        Node* newNode = new Node(value);
        if (pos == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Position out of range!" << endl;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete from beginning
    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Delete from end
    void deleteFromEnd() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr)
            temp = temp->next;
        delete temp->next;
        temp->next = nullptr;
    }

    // Delete by value
    void deleteByValue(int value) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;
        }
        if (temp->next == nullptr) {
            cout << "Value not found!" << endl;
            return;
        }
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
    }

    // Display the list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Search for a value
    void search(int value) {
        Node* temp = head;
        int pos = 1;
        while (temp != nullptr) {
            if (temp->data == value) {
                cout << "Value found at position: " << pos << endl;
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout << "Value not found!" << endl;
    }

    // Update node at specific position
    void update(int pos, int newValue) {
        if (pos <= 0) {
            cout << "Invalid position!" << endl;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos && temp != nullptr; i++) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Position out of range!" << endl;
            return;
        }
        temp->data = newValue;
    }

    // Get length of the list
    int length() {
        int count = 0;
        Node* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    // Find middle element
    void findMiddle() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        cout << "Middle element: " << slow->data << endl;
    }

    // Find nth node from end
    void findNthFromEnd(int n) {
        if (n <= 0) {
            cout << "Invalid value of n!" << endl;
            return;
        }

        Node* first = head;
        Node* second = head;

        for (int i = 0; i < n; i++) {
            if (first == nullptr) {
                cout << "List has fewer than " << n << " elements." << endl;
                return;
            }
            first = first->next;
        }

        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }

        cout << n << "th node from the end is: " << second->data << endl;
    }
};

int main() {
    LinkedList list;

    // Insertion operations
    cout << "\n🟢 Inserting values...\n";
    list.insert(10);         // Insert at end
    list.insert(20);
    list.insert(30);
    list.display();
    list.insertAtBeginning(5);   // Insert at beginning
    cout<<"The insertion at beginning is here\n";
    list.display();
    cout<<"The insertion at position 3 is here\n";
    list.insertAtPosition(0, 15); // Insert 15 at position 3
    list.display();

    // Deletion operations
    cout << "\n🔴 Deleting nodes...\n";
    list.deleteFromBeginning(); // Should delete 5
    list.deleteFromEnd();       // Should delete 30
    list.deleteByValue(15);     // Delete node with value 15
    list.display();

    // Search operation
    cout << "\n🔍 Searching for value 20...\n";
    list.search(20);            // Should find at position 2

    // Update operation
    cout << "\n✏️ Updating node at position 2 to 25...\n";
    list.update(2, 25);         // Update position 2 to 25
    list.display();

    // Length
    cout << "\n📏 Length of the list: " << list.length() << endl;

    // Find middle element
    cout << "\n📌 Middle Element:\n";
    list.findMiddle();

    // Find Nth node from end
    cout << "\n📍 2nd Node from End:\n";
    list.findNthFromEnd(2);

    return 0;
}

