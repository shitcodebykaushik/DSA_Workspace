#include<bits/stdc++.h>
using namespace std;
class ListNode {
    public:
    int data;
    ListNode*next;
    ListNode(int d) {
        data = d;
        next = nullptr;
    };
};
bool hasCycle(ListNode* head) {
    if(head == nullptr){
        return false;
    }
    ListNode*slow = head;
    ListNode*fast = head;
    while(fast != nullptr && fast ->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            return true;
        }

    }
    return false;
};
int main () {
    ListNode*first = new ListNode (12);
    first->next=new ListNode (10);
    first->next->next = new ListNode (15);
    // Creating a cycle for testing
  //  first->next->next->next = first->next; // Creates a cycle

    if(hasCycle(first)) {
        cout<<"Cycle detected!"<<endl;
    } else {
        cout<<"No cycle detected."<<endl;
    }
}