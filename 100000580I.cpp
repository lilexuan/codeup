#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char s[500];
    while (scanf("%s", s) != EOF) {
        int flag = 1;
        for (int i = 0; i < strlen(s) /2; i++) {
            if (s[i] != s[strlen(s) - 1 - i])
                flag = 0;
        }
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

