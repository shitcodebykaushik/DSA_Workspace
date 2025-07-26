#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Solution class with the function
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int s = 0;
        while (head != NULL) {
            s = s * 2 + head->val;
            head = head->next;
        }
        return s;
    }
};

// Helper function to create linked list from vector
ListNode* createLinkedList(const vector<int>& binaryDigits) {
    if (binaryDigits.empty()) return nullptr;

    ListNode* head = new ListNode(binaryDigits[0]);
    ListNode* current = head;

    for (int i = 1; i < binaryDigits.size(); ++i) {
        current->next = new ListNode(binaryDigits[i]);
        current = current->next;
    }

    return head;
}

// Main function to test
int main() {
    // Example: binary 101 = 5
    vector<int> binary = {1, 0, 1};  // You can change this to test other inputs

    ListNode* head = createLinkedList(binary);
    Solution sol;
    int decimalValue = sol.getDecimalValue(head);

    cout << "Decimal value: " << decimalValue << endl; // Output: 5

    return 0;
}
