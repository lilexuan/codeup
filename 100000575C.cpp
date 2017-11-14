#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char num1[10],num2[10];
    while (scanf("%s%s",num1,num2) != EOF){
        int sum = 0;
        for(int i=0;i<strlen(num1);i++){
            for(int j=0;j<strlen(num2);j++){
                sum += (num1[i] - '0') * (num2[j] - '0');
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}

