#include <cstdio>

using namespace std;

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        int A[6] = {0};
        int flag[6] = {0};
        int count2 = 0;
        int count4 = 0;
        for (int i = 0; i < N; i++) {
            int tmp;
            scanf("%d", &tmp);
            if (tmp % 5 == 0 && tmp % 2 == 0) {
                A[1] += tmp;
                flag[1] = 1;
            } else if (tmp % 5 == 1) {
                if (count2 % 2 == 0) {
                    A[2] += tmp;
                    flag[2] = 1;
                } else {
                    A[2] -= tmp;
                    flag[2] = 1;
                }
                count2++;
            } else if (tmp % 5 == 2) {
                A[3]++;
                flag[3] = 1;
            } else if (tmp % 5 == 3) {
                A[4] += tmp;
                count4++;
                flag[4] = 1;
            } else if (tmp % 5 == 4) {
                if (tmp > A[5]) {
                    A[5] = tmp;
                }
                flag[5] = 1;
            }
        }
        if (flag[1]) {
            printf("%d", A[1]);
        } else {
            printf("N");
        }
        for (int i = 2; i <= 5; i++) {
            printf(" ");
            if (flag[i]) {
                if (i != 4) {
                    printf("%d", A[i]);
                } else {
                    printf("%.1lf", (double) A[4] / (double) count4);
                }
            } else {
                printf("N");
            }
        }
        printf("\n");
    }
    return 0;
}

