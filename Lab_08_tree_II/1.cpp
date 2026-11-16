#include <iostream>
using namespace std;

class Node {
public:
    string data;
    Node* left;
    Node* right;

    Node(string value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = NULL;
    }

    void display() {
        cout << "University Department Hierarchy:" << endl;

        cout << "Member: " << root->data << endl;
        cout << "Left Child: " << root->left->data << endl;
        cout << "Right Child: " << root->right->data << endl;

        cout << "\nMember: " << root->left->data << endl;
        cout << "Left Child: " << root->left->left->data << endl;
        cout << "Right Child: " << root->left->right->data << endl;

        cout << "\nMember: " << root->right->data << endl;
        cout << "Left Child: " << root->right->left->data << endl;
        cout << "Right Child: " << root->right->right->data << endl;

        cout << "\nFaculty: " << root->left->left->data << endl;
        cout << "Faculty: " << root->left->right->data << endl;
        cout << "Faculty: " << root->right->left->data << endl;
        cout << "Faculty: " << root->right->right->data << endl;
    }
};
int main() {
    BinaryTree tree;

    tree.root = new Node("HOD");

    tree.root->left = new Node("Coordinator CS");
    tree.root->right = new Node("Coordinator AI");

    tree.root->left->left = new Node("Faculty 1");
    tree.root->left->right = new Node("Faculty 2");

    tree.root->right->left = new Node("Faculty 3");
    tree.root->right->right = new Node("Faculty 4");

    tree.display();

    return 0;
}

