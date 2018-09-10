#include <cstdio>
#include <cstring>

struct node {
    char data;
    node* lchild;
    node* rchild;
};

char pre[30], in[30];

node* creat(int preL, int preR, int inL, int inR) {
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
    root->lchild = creat(preL + 1, preL + numLeft, inL, k - 1); // 检查下标时, 后-前+1== numleft, 用这个公式去检查自己的前后下标有没有搞错
    root->rchild = creat(preL + numLeft + 1, preR, k + 1, inR);
    return root;
}

void postOrder(node* root) {
    if (root == NULL) { // 这个非常重要, 不要忘啦
        return;
    }
    postOrder(root->lchild);
    postOrder(root->rchild);
    printf("%c", root->data);
}

int main() {
    while (scanf("%s%s", pre, in) != EOF) {
        // printf("%s\n", pre);
        // printf("%s\n", in);
        int len = strlen(pre);
        node* root = creat(0, len - 1, 0, len - 1);
        postOrder(root);
        printf("\n");
    }
    return 0;
}