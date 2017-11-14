#include <cstdio>

using namespace std;

void swap(int *pa, int *pb, int *pc);

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int *pa = &a, *pb = &b, *pc = &c;
    swap(pa,pb,pc);
    printf("%d %d %d\n",a,b,c);
    return 0;
}

void swap(int *pa, int *pb, int *pc)
{
    int tmp;
    if(*pa < *pb){
        tmp = *pa;
        *pa = *pb;
        *pb = tmp;
    }
    if(*pb < *pc){
        tmp = *pc;
        *pc = *pb;
        *pb = tmp;
    }
    if(*pa < *pb){
        tmp = *pa;
        *pa = *pb;
        *pb = tmp;
    }
    return;
}
