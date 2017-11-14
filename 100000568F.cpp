#include <cstdio>

using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=5;j++){
            printf("%3d",i*j);
        }
        printf("\n");
    }
    return 0;
}
