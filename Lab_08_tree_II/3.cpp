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
private:
    Node* root;

    void inorder(Node* node) {
        if (node == NULL)
            return;

        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void preorder(Node* node) {
        if (node == NULL)
            return;

        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node* node) {
        if (node == NULL)
            return;

        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

public:
    BinaryTree() {
        root = NULL;
    }

    void createTree() {
        root = new Node("C");

        root->left = new Node("Documents");
        root->right = new Node("Downloads");

        root->left->left = new Node("Assignments");
        root->left->right = new Node("Projects");

        root->right->left = new Node("Images");
        root->right->right = new Node("Videos");
    }

    void showTraversals() {
        cout << "In-order: ";
        inorder(root);

        cout << "\nPre-order: ";
        preorder(root);

        cout << "\nPost-order: ";
        postorder(root);

        cout << endl;
    }
};

int main() {
    BinaryTree tree;

    tree.createTree();

    tree.showTraversals();

    return 0;
}

