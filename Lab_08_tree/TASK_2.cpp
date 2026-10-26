#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class BST {
private:
    Node* root;

    Node* insert(Node* node, int value) {
        if(node == NULL)
            return new Node(value);

        if(value < node->data)
            node->left = insert(node->left, value);
        else if(value > node->data)
            node->right = insert(node->right, value);

        return node;
    }

    void inorder(Node* node) {
        if(node == NULL)
            return;

        inorder(node->left);
        cout<<node->data<<" ";
        inorder(node->right);
    }

    void destroy(Node* node) {
        if(node == NULL)
            return;

        destroy(node->left);
        destroy(node->right);
        delete node;
    }

public:
    BST() {
        root = NULL;
    }

    void insertValue(int value) {
        root = insert(root, value);
    }

    void display() {
        cout<<"Roll Numbers in Ascending Order: ";
        inorder(root);
        cout<<endl;
    }
};

int main() {
    BST tree;
    int a,b;

    tree.insertValue(45);
    tree.insertValue(25);
    tree.insertValue(65);
    tree.insertValue(15);
    tree.insertValue(35);
    tree.insertValue(55);
    tree.insertValue(75);

    cout<<"Enter first additional roll number: ";
    cin>>a;
    tree.insertValue(a);

    cout<<"Enter second additional roll number: ";
    cin>>b;
    tree.insertValue(b);

    tree.display();

    return 0;
}

