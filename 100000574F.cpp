#include <cstdio>

using namespace std;

int main()
{
    int n;
    while (scanf("%d",&n) != EOF){
        int sum = 0, tmp;
        while (n--){
            scanf("%d",&tmp);
            sum += tmp;
        }
        printf("%d\n",sum);
    }
    return 0;
}

