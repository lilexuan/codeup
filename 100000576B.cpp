#include <cstdio>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) != EOF) {
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int flag = 1, num;
        scanf("%d", &num);
        for (int i = 0; i < n; i++) {
            if (a[i] == num) {
                printf("%d\n", i);
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("-1\n");
    }
    return 0;
}
