#include <cstdio>

using namespace std;

int main(){
    int i = 1, sum = 0;
    while(sum <= 1000){
        sum += i;
        i++;
    }
    i--;
    printf("%d\n",i);
    return 0;
}
