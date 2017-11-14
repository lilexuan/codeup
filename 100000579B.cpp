#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int a2ten(int a, char n[]);
void ten2b(int tmp, char result[], int b);
int main()
{
    int a, b;
    char n[200];
    while (scanf("%d%s%d", &a, n, &b) != EOF) {
        int tmp = a2ten(a, n);
//        printf("tmp = %d\n", tmp);
        char result[200] = {0};
        ten2b(tmp, result, b);
        for (int i = strlen(result) - 1; i >= 0; i--) {
            printf("%c", result[i]);
        }
        printf("\n");
    }
    return 0;
}
int a2ten(int a, char n[])
{
    int result = 0;
    for (int i = 0, j = strlen(n) - 1;i < strlen(n); i++, j--) {
        if ('0' <= n[i] && n[i] <= '9') {
            result += (n[i] - '0') * pow(a, j);
        } else if ('A' <= n[i] && n[i] <= 'F') {
            result += (n[i] - '7') * pow(a, j);
        } else if ('a' <= n[i] && n[i] <= 'f') {
            result += (n[i] - 'W') * pow(a, j);
        }
    }
    return result;
}
void ten2b(int tmp, char result[], int b)
{
    int num = 0;
    do {
        if ( 0 <= (tmp % b) && (tmp % b) <= 9)
            result[num++] = (tmp % b) + '0';
        else if (9 < (tmp % b))
            result[num++] = (tmp % b) + '7';
        tmp /= b;
    } while (tmp);
}
