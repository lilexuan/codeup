#include <cstdio>

using namespace std;

int main()
{
    int a[10];
    for(int i=0;i<10;i++)
        scanf("%d",&(a[i]));
    for(int i=0;i<10;i++){
        for(int j=0;j<10-i-1;j++){
            if(a[j] > a[j+1]){
                int tmp = a[j+1];
                a[j+1] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%d",a[i]);
        if(i != 9)
            printf("\n");
    }
    return 0;
}
