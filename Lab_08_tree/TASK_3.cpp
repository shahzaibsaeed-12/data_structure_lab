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

    bool search(Node* node, int value, int &count) {
        if(node == NULL)
            return false;

        count++;

        if(node->data == value)
            return true;

        if(value < node->data)
            return search(node->left, value, count);

        return search(node->right, value, count);
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

    ~BST() {
        destroy(root);
    }

    void insertValue(int value) {
        root = insert(root, value);
    }

    void searchValue(int value) {
        int count = 0;

        if(search(root, value, count))
            cout<<"Book Found"<<endl;
        else
            cout<<"Book Not Found"<<endl;

        cout<<"Number of Comparisons: "<<count<<endl;
    }
};

int main() {
    BST tree;
    int id;

    tree.insertValue(40);
    tree.insertValue(20);
    tree.insertValue(60);
    tree.insertValue(10);
    tree.insertValue(30);
    tree.insertValue(50);
    tree.insertValue(70);

    cout<<"Enter Book ID to search: ";
    cin>>id;

    tree.searchValue(id);

    return 0;
}

