#include <cstdio>

int main()
{
    int m;
    scanf("%d", &m);
    char s[102][21] = {0};
    for (int i = 1; i <= m; i++) {
        scanf("%s", s[i]);
        printf("1=%s", s[i]);
        if (i >= 2) {
            printf(" 2=%s", s[i - 1]);
        }
        if (i >= 3) {
            printf(" 3=%s", s[i - 2]);
        }
        if (i >= 4) {
            printf(" 4=%s", s[i - 3]);
        }
        printf("\n");
    }
    return 0;
}
