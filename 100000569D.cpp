#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    int tmp;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        if('a' <= str[i] && str[i] <= 'm'){
            tmp = 109 - (int)str[i];
            str[i] = 109 + tmp + 1;
        } else if ('n' <= str[i] && str[i] <= 'z'){
            tmp = (int)str[i] - 109;
            str[i] = 109 - tmp + 1;
        } else if ('A' <= str[i] && str[i] <= 'M'){
            tmp = 77 - (int)str[i];
            str[i] = 77 + tmp + 1;
        } else if ('N' <= str[i] && str[i] <= 'Z'){
            tmp = (int)str[i] - 77;
            str[i] = 77 - tmp + 1;
        }
    }
    printf("%s",str);
    return 0;
}
