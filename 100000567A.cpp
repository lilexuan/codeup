#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c,delta;
    scanf("%lf%lf%lf",&a,&b,&c);
    delta = pow(b,2)-4*a*c;
    double r1,r2;
    if (delta < 0)
        printf("No real roots!");
    else {
        r1 = -(b-sqrt(delta))/(2*a);
        r2 = -(b+sqrt(delta))/(2*a);
        printf("r1=  %.2lf",r1);
        printf("r2=  %.2lf",r2);
    }
    return 0;
}

