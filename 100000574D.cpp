#include <cstdio>

int main()
{
    int n;
    while (true){
        scanf("%d",&n);
        if(!n)
            break;
        else{
            int sum = 0;
            int tmp;
            for(int i=1;i<=n;i++){
                scanf("%d",&tmp);
                sum += tmp;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}

