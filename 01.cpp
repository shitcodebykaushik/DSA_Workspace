#include <bits/stdc++.h>
using namespace std;
struct Book {
    int id;
    string title;
    double price;
};
struct Node {
    Book* book;
    Node* left;
    Node* right;
    Node(Book* book) : book(book), left(nullptr), right(nullptr) {}
};
Node* insert(Node* root, Book* book) {
    if (root == nullptr) {
        return new Node(book);  
    }
    if (book->id < root->book->id) {
        root->left = insert(root->left, book);
    } else {
        root->right = insert(root->right, book);
    }
    return root;
};void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << "ID: " << root->book->id << ", Title: " << root->book->title << ", Price: " << root->book->price << endl;
        inorder(root->right);
    }
};
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << "ID: " << root->book->id << ", Title: " << root->book->title << ", Price: " << root->book->price << endl;
        inorder(root->right);
    }
};

int main () {
    Book* bookA = new Book{1, " DSA", 8};
    Book* bookB = new Book{2, "ABCFRWDLF",5};
    Node* root = nullptr;
    root = insert(root, bookA);
    root = insert(root, bookB);
    cout << "Books in the store are :- " << endl;
    inorder(root);
    cout<<"Please enter  BookID which yoy want to delete"<<endl;
    return 0;
};