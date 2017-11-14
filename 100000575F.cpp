#include <cstdio>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        long long A, B, C;
        scanf("%lld%lld%lld",&A,&B,&C);
        if((A+B) > C)
            printf("Case #%d: true\n", i);
        else
            printf("Case #%d: false\n",i);
    }
    return 0;
}

