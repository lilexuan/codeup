#include <cstdio>

using namespace std;

int F(int n);

int main(){
    int n,sum;
    scanf("%d",&n);
    sum = F(n);
    printf("%d\n",sum);
    return 0;
}

int F(int n)
{
    if(n == 1 || n == 2)
        return 1;
    else
        return (F(n-1) + F(n-2));
}
