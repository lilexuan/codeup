#include <cstdio>
#include <cstring>

int main()
{
    int m;
    scanf("%d", &m);
    while (m--) {
        char s1[51] = {0};
        char s2[51] = {0};
        scanf("%s %s", s1, s2);
        int len1 = strlen(s1), len2 = strlen(s2);
        if (len1 > len2) {
            printf("%s is longer than %s\n", s1, s2);
        } else if (len1 < len2) {
            printf("%s is shorter than %s\n", s1, s2);
        } else {
            printf("%s is equal long to %s\n", s1, s2);
        }
    }
    return 0;
}
