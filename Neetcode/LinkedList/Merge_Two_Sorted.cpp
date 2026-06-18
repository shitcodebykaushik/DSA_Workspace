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
ListNode* mergeTwoLists(ListNode* list1,ListNode* list2) { 
    ListNode dummy(0);
    ListNode*tail = &dummy;

    while(list1 != nullptr && list2 != nullptr) {
        if(list1->data <list2->data) {
            tail->next = list1;
            list1=list1->next;
        } else {
            tail->next = list2;
            list2=list2->next;
        }
        tail = tail->next;
    }
    if (list1 != nullptr) {
        tail->next = list1;
    }else {
        tail->next = list2;
    }
    return dummy.next;
};
int main () {
    ListNode*first = new ListNode (12);
    first->next=new ListNode (10);
    first->next->next = new ListNode (15);
    ListNode*second = new ListNode (12);
    second->next=new ListNode (13);
    ListNode*mergedHead = mergeTwoLists(first,second);
    ListNode*temp = mergedHead;
    while(temp != nullptr) {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"nullptr"<<endl;
}