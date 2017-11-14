#include <cstdio>
#include <cstring>
int main()
{
    char s[201] = {0};
    while (gets(s) != NULL) {
        for (int i = strlen(s) - 1; i >= 0; i--) {
            printf("%c", s[i]);
        }
        printf("\n");
    }
    return 0;
}
