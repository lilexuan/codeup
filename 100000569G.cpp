#include <cstdio>

using namespace std;

int main()
{
    int i = 1, f[21];
    while(i <= 20){
        if(i == 1 || i == 2){
            f[i] = 1;
            i++;
            printf("1\n");
        } else {
            f[i] = f[i-1] + f[i-2];
            printf("%d\n",f[i]);
            i++;
        }
    }
    return 0;
}
