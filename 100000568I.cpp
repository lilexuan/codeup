#include <cstdio>

using namespace std;

int main()
{
    double sum = 0.0;
    int mother = 1, son = 2, i = 1, tmp;
    while(i <= 20){
        sum += (double)son/(double)mother;
        tmp = mother + son;
        mother = son;
        son = tmp;
        i++;
    }
    printf("%.6lf\n",sum);
    return 0;
}
