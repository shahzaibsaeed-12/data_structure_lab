#include <iostream>
#include <queue>
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

    void BFS() {
        if (root == NULL)
            return;

        queue<Node*> q;

        q.push(root);

        cout << "BFS Traversal: ";

        while (!q.empty()) {
            Node* temp = q.front();

            cout << temp->data << " ";

            q.pop();

            if (temp->left != NULL)
                q.push(temp->left);

            if (temp->right != NULL)
                q.push(temp->right);
        }

        cout << endl;
    }
};

int main() {
    BinaryTree tree;

    tree.root = new Node("Electronics");

    tree.root->left = new Node("Clothing");
    tree.root->right = new Node("Mobiles");

    tree.root->left->left = new Node("Men");
    tree.root->left->right = new Node("Women");

    tree.root->right->left = new Node("Laptops");
    tree.root->right->right = new Node("Accessories");

    tree.BFS();

    return 0;
}

