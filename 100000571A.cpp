#include <cstdio>

using namespace std;

void swap(int *pa, int *pb);

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int *pa = &a, *pb = &b;
    if(a<b)
        swap(pa,pb);
    printf("%d %d\n",a,b);
    return 0;
}

void swap(int *pa, int *pb)
{
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}
