#include <cstdio>

using namespace std;

int main()
{
    int num,i,j,tmp;
    scanf("%d",&num);
    const int c = num;
    int a[c][c];
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            if(j == 1){
                printf("1");
                a[i][j] = 1;
            } else if(j == i){
                printf(" 1");
                a[i][j] = 1;
            } else{
                tmp = a[i-1][j-1]+a[i-1][j];
                a[i][j] = tmp;
                printf(" %d",tmp);
            }
        }
        if(i != num)
            printf("\n");
    }
    return 0;
}
