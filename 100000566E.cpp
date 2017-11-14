#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double delta = b*b-4*a*c;
    double r1,r2;
    r1 = (b+sqrt(delta))/(2*a);
    r2 = (b-sqrt(delta))/(2*a);
    printf("r1=  %.2lf\n",r1);
    printf("r2=  %.2lf",r2);
    return 0;
}
