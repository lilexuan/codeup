#include <cstdio>
using namespace std;
int main()
{
    int number;
    while (scanf("%d", &number) != EOF) {
        int result[500], num = 0;
        do {
            result[num++] = number % 8;
            number /= 8;
        } while (number);
        for (int i = num - 1; i >= 0; i--) {
            printf("%d", result[i]);
        }
        printf("\n");
    }
    return 0;
}
