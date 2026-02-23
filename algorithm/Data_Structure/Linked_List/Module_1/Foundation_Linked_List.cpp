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




        void insertFront (int val) {

            Node* newNode = new Node (val);
            newNode->next=head;
            head = newNode;
        };


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
    cout<<"Is empty "<<list.isEmpty()<<endl;
    list.insertFront(5);
    cout<<"Is empty "<<list.isEmpty()<<endl;
    list.print();
}

