#include<iostream>
using namespace std;

class Node {
public:
    string name;
    Node* left;
    Node* right;

    Node(string value) {
        name = value;
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
        cout<<"Person: "<<root->name<<endl;
        cout<<"Left Child: "<<root->left->name<<endl;
        cout<<"Right Child: "<<root->right->name<<endl;

        cout<<"Person: "<<root->left->name<<endl;
        cout<<"Left Child: "<<root->left->left->name<<endl;
        cout<<"Right Child: "<<root->left->right->name<<endl;

        cout<<"Person: "<<root->right->name<<endl;
        cout<<"Left Child: "<<root->right->left->name<<endl;
        cout<<"Right Child: "<<root->right->right->name<<endl;
    }
int main() {
    BinaryTree tree;

    tree.root = new Node("Grandfather");
    tree.root->left = new Node("Father");
    tree.root->right = new Node("Uncle");
    tree.root->left->left = new Node("Shahzaib");
    tree.root->left->right = new Node("Brother");
    tree.root->right->left = new Node("Cousin1");
    tree.root->right->right = new Node("Cousin2");

    tree.display();

    return 0;
}

