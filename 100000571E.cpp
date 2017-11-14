#include <cstdio>

using namespace std;

void input(int a[]);
void swap(int a[]);
void output(int a[]);

int main()
{
    int a[10];
    input(a);
    swap(a);
    output(a);
    return 0;
}

void input(int a[])
{
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    return;
}

void swap(int a[])
{
    int tmp, max = a[0], maxflag = 0;
    for(int i=0;i<10;i++){
        if(a[i] > max){
            max = a[i];
            maxflag = i;
        }
    }
    tmp = a[9];
    a[9] = a[maxflag];
    a[maxflag] = tmp;
    int min = a[0], minflag = 0;
    for(int i=0;i<10;i++){
        if(a[i] < min){
            min = a[i];
            minflag = i;
        }
    }
    tmp = a[0];
    a[0] = a[minflag];
    a[minflag] = tmp;
    return;
}

void output(int a[])
{
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return ;
}
