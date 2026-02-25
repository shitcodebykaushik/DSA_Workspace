#include <bits/stdc++.h>
using namespace std;

class Linked {
    private:
    struct Node
    {
        int data ;
        Node*next;

        Node (int val) {
            data = val;
            next = nullptr;
        };

    };
    public :

    Node * head;

    Linked () {
        head = nullptr;
    };

    void insert (int x) {
        Node*newNode = new Node (x);
        newNode ->next = head;
        head = newNode;

        // Verification 
        
        cout<< "New Node Address : " << newNode<<endl;
        cout<<"Points to  (next ) : "  << newNode ->next <<endl<<endl;
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
    Linked llw;
    llw.insert(2);
    llw.insert(3);
    llw.print();

}