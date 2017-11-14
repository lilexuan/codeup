#include <cstdio>

using namespace std;

int main()
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    max = (a>b?a:b) > c ? (a>b?a:b) : c;
    printf("%d",max);
    return 0;
}
