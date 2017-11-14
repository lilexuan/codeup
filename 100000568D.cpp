#include <cstdio>

using namespace std;

int main()
{
    int sum = 0;
    int i = 1,N;
    scanf("%d",&N);
    while(true){
        sum += i;
        if (i == N){
            break;
        } else {
            i++;
        }
    }
    printf("%d\n",sum);
    return 0;
}
