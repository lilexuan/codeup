#include <cstdio>

using namespace std;

int main()
{
    int a[2][3];
    int ra[3][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&(a[i][j]));
            ra[j][i] = a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            if(j)
                printf(" ");
            printf("%d",ra[i][j]);
        }
        printf("\n");
    }
    return 0;
}
