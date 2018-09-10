#include <cstdio>
#include <cstring>

struct node {
    char data;
    node* lchild;
    node* rchild;
};

char seq[110];
int id;
bool flag;

node* buildTree() {
    if (seq[id] == '#' || id >= strlen(seq)) {
        id++;
        return NULL;
    }
    node* root = new node;
    root->data = seq[id++];
    root->lchild = buildTree();
    root->rchild = buildTree();
    return root;
}

void inOrder(node* root) {
    if (root == NULL) {
        return;
    }
    inOrder(root->lchild);
    if (flag) {
        printf(" ");
    }
    if (flag == false) {
        flag = true;
    }
    printf("%c", root->data);
    inOrder(root->rchild);
}

int main() {
    while (scanf("%s", seq) != EOF) {
        id = 0;
        node* root = buildTree();
        flag = false;
        inOrder(root);
        printf("\n");
    }
    return 0;
}