#include <cstdio>

int main()
{
    char c;
    int firstFlag = 1;
    int flag = 0;
    while (scanf("%c", &c) != EOF) {
        if (firstFlag) {
            firstFlag = 0;
            if ('a' <= c && c <= 'z') {
                c -= 32;
            }
        }
       if (flag) {
            flag = 0;
            if ('a' <= c && c <= 'z') {
               c -= 32;
            }
        }
        if (c == ' ' || c == '\t' || c == '\n' || c == '\r') {
            flag = 1;
        }
        printf("%c", c);
    }
    return 0;
}

