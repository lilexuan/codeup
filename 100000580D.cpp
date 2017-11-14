#include <cstdio>
#include <cstring>
int main()
{
    char s[101] = {0};
    char a[101], b[101];
    while (gets(s) != NULL) {
        char words[101][101] = {0};
        for (int i = 0; i < 101; i++) {
            a[i] = 0;
            b[i] = 0;
        }
        scanf("%s %s", a, b);
        getchar();
        int j = 0, k = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] != ' ') {
                words[j][k++] = s[i];
            } else {
                j++;
                k = 0;
            }
        }
        for (int i = 0; i <= j; i++) {
            if (!strcmp(a, words[i])) {
                for (int v = 0; v < strlen(words[i]); v++) {
                    words[i][v] = 0;
                }
                strcpy(words[i], b);
            }
        }
        for (int i = 0; i <= j; i++) {
            if (i)
                printf(" ");
            printf("%s", words[i]);
        }
        printf("\n");
    }
    return 0;
}
