#include <iostream>
#include <algorithm>
using namespace std;
class Node {
public:
    int data, height;
    Node *left, *right;

    Node(int value) {
        data = value;
        height = 1;
        left = right = NULL;
    }
};
int getHeight(Node* n) {
    if (n == NULL)
        return 0;

    return n->height;
}
int getBalance(Node* n) {
    if (n == NULL)
        return 0;

    return getHeight(n->left) - getHeight(n->right);
}
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* temp = x->right;

    x->right = y;
    y->left = temp;

    y->height = 1 + max(getHeight(y->left), getHeight(y->right));
    x->height = 1 + max(getHeight(x->left), getHeight(x->right));

    return x;
}
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* temp = y->left;

    y->left = x;
    x->right = temp;

    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));

    return y;
}
Node* insert(Node* root, int value) {

    if (root == NULL)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);

    else if (value > root->data)
        root->right = insert(root->right, value);

    else
        return root;

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    int balance = getBalance(root);
    if (balance > 1 && value < root->left->data)
        return rightRotate(root);
    if (balance < -1 && value > root->right->data)
        return leftRotate(root);
    if (balance > 1 && value > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    if (balance < -1 && value < root->right->data) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}
void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void display(Node* root, int space = 0) {
    if (root == NULL)
        return;

    space += 5;

    display(root->right, space);

    cout << endl;

    for (int i = 5; i < space; i++)
        cout << " ";

    cout << root->data << endl;

    display(root->left, space);
}

int main() {
    Node* root = NULL;
    root = insert(root, 15);
    root = insert(root, 25);
    root = insert(root, 35);
    root = insert(root, 45);
    root = insert(root, 55);
    root = insert(root, 65);
    root = insert(root, 75);

    cout << "In-order Traversal: ";
    inorder(root);

    cout << "\n\nFinal Balanced AVL Tree:" << endl;
    display(root);

    return 0;
}

