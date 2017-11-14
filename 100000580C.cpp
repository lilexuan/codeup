#include <cstdio>
#include <cstring>
using namespace std;
char lower(char a);
int isDelete(char shorts[], char longs[]);
int main()
{
    char shorts[20] = {0};
    scanf("%s\n", shorts); // 用gets的话，前面的scanf记得添加\n,这里害死我了
    char longs[200] = {0};
    char result[200] = {0};
    while (gets(longs) != NULL) {
       for (int i = 0, k = 0; i < strlen(longs); i++) {
            if (longs[i] == ' ')
                i++;
            if (lower(longs[i]) != lower(shorts[0])) {
                result[k++] = longs[i];
            } else {
                int cnt = isDelete(shorts, longs + i);
                if (cnt)
                    i += cnt - 1;
                else {
                    result[k++] = longs[i];
                }
            }
       }
        printf("%s\n",result);
        for (int i = 0; i < 200; i++) {
            longs[i] = 0;
            result[i] = 0;
        }
    }
    return 0;
}
char lower(char a)
{
    if ('A' <= a && a <= 'Z')
        return (char)(a + 32);
    else
        return a;
}
int isDelete(char shorts[], char longs[])
{
    int cnt = 0;
    for (int i = 0; i < strlen(shorts); i++) {
        if (lower(shorts[i]) == lower(longs[i]))
            cnt++;
    }
    if (cnt == strlen(shorts)) {
        return cnt;
    } else {
        return 0;
    }
}
