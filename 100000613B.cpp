#include <iostream>
#include <string>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

TreeNode* buildTree(string nodes);
void insert(TreeNode *&root, int x);
bool isSameTree(TreeNode *root1, TreeNode *root2);

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        string nodes;
        cin >> nodes;
        TreeNode* root = buildTree(nodes);
        while (n--) {
            string nodes2;
            cin >> nodes2;
            TreeNode* root2 = buildTree(nodes2);
            if (isSameTree(root, root2)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

TreeNode* buildTree(string nodes) {
    TreeNode* root = NULL;
    for (int i = 0; i < nodes.length(); i++) {
        insert(root, nodes[i] - '0');
    }
    return root;
}

void insert(TreeNode *&root, int x) {
    if (root == NULL) {
        root = new TreeNode;
        root->val = x;
        root->left = NULL;
        root->right = NULL;
        return;
    }
    if (root->val == x) {
        return;
    } else if (root->val > x) {
        insert(root->left, x);
    } else {
        insert(root->right, x);
    }
}

bool isSameTree(TreeNode *root1, TreeNode *root2) {
    if (root1 == NULL && root2 == NULL) return true;
    if ((root1 != NULL && root2 == NULL) || (root1 == NULL && root2 != NULL)) {
        return false;
    } 
    if (root1->val != root2 ->val) return false;
    return isSameTree(root1->left, root2->left) && isSameTree(root1->right, root2->right);
}