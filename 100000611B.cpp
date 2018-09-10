#include <cstdio>

int count(int n, int m, int num) {
    if (m > n) {
        return num;
    }
    num++;
    num = count(n, 2 * m, num);
    num = count(n, 2 * m + 1, num);
    return num;
}

int main() {
    int n, m;
    while (scanf("%d%d", &m, &n) != EOF) {
        if (n == 0 && m == 0) {
            break;
        }
        int num = 0;
        num = count(n, m, num);
        printf("%d\n", num);
    }
    return 0;
}