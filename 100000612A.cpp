#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        int tmp;
        vector<int> node;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            node.push_back(tmp);
        }
        int layer;
        cin >> layer;
        if (n <= (int)pow(2, layer - 1)) {
            cout << "EMPTY" << endl;
            continue;
        }
        int begin = (int)pow(2, layer - 1) - 1;
        int end = (int)pow(2, layer) - 2;
        if (end > n - 1) {
            end = n - 1;
        }
        bool flag = 0;
        for (int i = begin; i <= end; i++) {
            if (flag) {
                cout << " ";
            } else {
                flag = 1;
            }
            cout << node[i];
        }
        cout << endl;
    }
    return 0;
}