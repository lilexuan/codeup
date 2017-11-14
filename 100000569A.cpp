#include <cstdio>

using namespace std;

int main()
{
    int a[10],tmp;
    for(int i=0;i<10;i++){
        scanf("%d",&(a[i]));
    }
    tmp = a[9];
    for(int i=0;i<9;i++){
        if(a[9] < a[i]){
            for(int j=9;j>i;j--){
                a[j] = a[j-1];
            }
            a[i] = tmp;
            break;
        }
    }
    for(int i=0;i<10;i++)
        printf("%d\n",a[i]);
    return 0;
}
