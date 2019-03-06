#include <iostream>
#include <vector>
using namespace std;

struct node {
    int val;
    vector<int> child;
};

int height(int root, struct node TNode[]);

int main() {
    int n;
    cin >> n;
    node TNode[n + 1];
    int father, son;
    while (cin >> father >> son) {
        TNode[father].child.push_back(son);
    }
    int h = height(1, TNode);
    cout << h << endl;
    return 0;
}

int height(int root, struct node TNode[]) {
    if (TNode[root].child.empty() == true) {
        return 1;
    }
    int max = -1;
    for (int i = 0; i < TNode[root].child.size(); i++) {
        int h = height(TNode[root].child[i], TNode);
        if (h > max) {
            max = h;
        }
    }
    return max + 1;
}