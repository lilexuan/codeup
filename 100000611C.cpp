#include <cstdio>
#include <cstring>

struct node {
    char data;
    node* lchild;
    node* rchild;
};

char pre[30], in[30];

node* create(int preL, int preR, int inL, int inR) {
    if (preL > preR) {
        return NULL;
    }
    node* root = new node;
    root->data = pre[preL];
    int k;
    for (k = inL; k <= inR; k++) {
        if (in[k] == pre[preL]) {
            break;
        }
    }
    int numLeft = k - inL;
    root->lchild = create(preL + 1, preL + numLeft, inL, k - 1);
    root->rchild = create(preL + numLeft + 1, preR, k + 1, inR);
    return root;
}

void postOrder(node* root) {
    if (root == NULL) {
        return;
    }
    postOrder(root->lchild);
    postOrder(root->rchild);
    printf("%c", root->data);
}

int main() {
    while (scanf("%s%s", pre, in) != EOF) {
        int len = strlen(pre);
        node* root = create(0, len - 1, 0, len - 1);
        postOrder(root);
        printf("\n");
    }
    return 0;
}