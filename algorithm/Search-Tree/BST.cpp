#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

};
Node* creatnode (int key) {
    Node* newNode = new Node;
    newNode->data= key;
    newNode -> left = nullptr;
    newNode ->right = nullptr;
};

// Insert function(recursive )

Node* insert (Node* root,int key) {
    if(root==nullptr){
        return creatnode(key);
    }if(key<root->data) {
        root->left = insert(root->left,key);
    }else if (key>root->data) {
        root->right = insert(root->left,key);
    }
    return root;
}


int main () {

}