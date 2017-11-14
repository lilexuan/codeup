#include <cstdio>

using namespace std;

int main()
{
    int n;
    while (scanf("%d",&n) != EOF){
        int odd = 0, even = 0, tmp;
        while (n--){
            scanf("%d",&tmp);
            if(tmp % 2)
                odd++;
            else
                even++;
        }
        if(even > odd)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}

