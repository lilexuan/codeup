#include <cstdio>
#include <cstring>
using namespace std;
bool isZero(char s[]);
int main()
{
    char number[31] = {0};
    int result[500];
    while (scanf("%s", number) != EOF) {
        int k = 0;
        do {
            int remain = 0;
            for (int i = 0; i < strlen(number); i++) {
                char tmp = (char)((remain * 10 + (number[i] - '0')) / 2 + '0');
                remain = (remain * 10 + (number[i] - '0')) % 2;
                number[i] = tmp;
            }
            result[k++] = remain;
        } while (!isZero(number));
        for (int i = k - 1; i >= 0; i--) {
            printf("%d", result[i]);
        }
        printf("\n");
    }
    return 0;
}
bool isZero(char s[])
{
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != '0' && s[i] != 0)
            return false;
    }
    return true;
}
