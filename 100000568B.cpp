#include <cstdio>

using namespace std;

int main()
{
    int sum = 0;
    int i = 1;
    do{
        sum += i;
        i++;
    }while (i <= 100);
    printf("%d\n",sum);
    return 0;
}
