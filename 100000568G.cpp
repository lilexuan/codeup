#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double pi = 0, tmp;
    int n = 1;
    while(1/(2*(double)n-1) >= pow(10,-6)){
        tmp = pow(-1,n+1) * (1/(2*(double)n-1));
        pi += tmp;
        n++;
    }
    printf("PI=%.8lf",4*pi);
    return 0;
}
