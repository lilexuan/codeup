#include <cstdio>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        int m;
        scanf("%d",&m);
        int sum = 0, tmp;
        while (m--){
            scanf("%d",&tmp);
            sum += tmp;
        }
        printf("%d\n",sum);
    }
    return 0;
}

