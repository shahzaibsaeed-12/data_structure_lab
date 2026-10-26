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

    Node* findMin(Node* node) {
        while(node->left != NULL)
            node = node->left;

        return node;
    }

    Node* deleteNode(Node* node, int value) {
        if(node == NULL)
            return NULL;

        if(value < node->data)
            node->left = deleteNode(node->left, value);
        else if(value > node->data)
            node->right = deleteNode(node->right, value);
        else {
            if(node->left == NULL) {
                Node* temp = node->right;
                delete node;
                return temp;
            }

            if(node->right == NULL) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            Node* temp = findMin(node->right);
            node->data = temp->data;
            node->right = deleteNode(node->right, temp->data);
        }

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

    ~BST() {
        destroy(root);
    }

    void insertValue(int value) {
        root = insert(root, value);
    }

    void deleteValue(int value) {
        root = deleteNode(root, value);
    }

    void display() {
        inorder(root);
        cout<<endl;
    }
};

int main() {
    BST tree;
    int id;

    tree.insertValue(50);
    tree.insertValue(30);
    tree.insertValue(70);
    tree.insertValue(20);
    tree.insertValue(40);
    tree.insertValue(60);
    tree.insertValue(80);

    cout<<"Employee IDs before deletion: ";
    tree.display();

    cout<<"Enter Employee ID to delete: ";
    cin>>id;

    tree.deleteValue(id);

    cout<<"Employee IDs after deletion: ";
    tree.display();

    return 0;
}

