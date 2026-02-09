#include  <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;


    Node(int data1,Node* prev,Node* next2 ){
         data = data1;
         next = prev;
         prev=next2;
    }
    Node(int data1){
        data =data1;
        next = nullptr;
        next = nullptr;
    }

};
int main () {
    vector <int>v = {1,2,3,4};
    Node* x = new Node(v[1]);

    Node*y = new Node(v[2],x,nullptr);
    Node*z = new Node(v[3],y,nullptr)


}

