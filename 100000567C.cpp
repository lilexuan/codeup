#include <cstdio>

using namespace std;

int main()
{
    double a,b,c,tmp;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>b){
        tmp = a;
        a = b;
        b = tmp;
    }
    if(b>c){
        tmp = b;
        b = c;
        c = tmp;
    }
    if(a>b){
        tmp = a;
        a = b;
        b = tmp;
    }
    printf("%.2lf %.2lf %.2lf",a,b,c);
    return 0;
}
