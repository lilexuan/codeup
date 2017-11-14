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
        int m;
        scanf("%d", &m);
        int b[n];
        for (int k = 0; k < m; k++) {
            scanf("%d",&b[k]);
            int j;
            for (j = 0; j < n; j++){
                if (b[k] == a[j]) {
                    printf("YES\n");
                    break;
                }
            }
            if (j == n)
                printf("NO\n");
        }
    }
    return 0;
}
