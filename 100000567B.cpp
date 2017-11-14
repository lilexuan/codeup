#include <cstdio>

using namespace std;

int main()
{
    double a,b,tmp;
    scanf("%lf%lf",&a,&b);
    if(a>b){
        tmp = a;
        a = b;
        b = tmp;
    }
    printf("%.2lf %.2lf",a,b);
    return 0;
}
