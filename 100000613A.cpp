#include <iostream>
using namespace std;

struct node {
    int val;
    node *left, *right;
};

void insert(node *&root, int x);
void preOrder(node *root);
void inOrder(node *root);
void postOrder(node *root);

int main() {
    int n;
    while (cin >> n) {
        // cout << "n=" << n << endl;
        node *root = NULL;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            insert(root, num); 
        }
        preOrder(root);
        cout << endl;
        inOrder(root);
        cout << endl;
        postOrder(root);
        cout << endl;
    }
    return 0;
}

void insert(node *&root, int x) {
    if (root == NULL) {
        root = new node;
        root->val = x;
        root->left = NULL;
        root->right = NULL;
        // cout << "build:" << x << endl;
        return;
    }
    if (x == root->val) {
        return;
    } else if (x > root->val) {
        insert(root->right, x);
    } else {
        insert(root->left, x);
    }
}

void preOrder(node *root) {
    if (root == NULL) {
        return;
    }
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node *root) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

void postOrder(node *root) {
    if (root == NULL) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}