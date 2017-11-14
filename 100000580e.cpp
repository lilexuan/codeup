#include <cstdio>
#include <cstring>
int main()
{
    char s[1000] = {0};
    char c;
    while (gets(s) != NULL) {
        scanf("%c", &c);
        getchar();
        char result[1000] = {0};
        int k = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] != c) {
                result[k++] = s[i];
            } else
                continue;
        }
        printf("%s\n", result);
    }
    return 0;
}
