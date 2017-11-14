#include <cstdio>

using namespace std;

int main()
{
    long long A, B, result;
    int m;
    while (true) {
        scanf("%d", &m);
        if (!m)
            break;
        scanf("%lld%lld", &A, &B);
        long long  z[40];
        int num  = 0;
        result = A + B;
        do {
            z[num++] = result % m;
            result /= m;
        } while (result);
        for (int i = num - 1; i >=0; i--) {
            printf("%lld",z[i]);
        }
        printf("\n");
    }
    return 0;
}
