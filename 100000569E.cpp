#include <cstdio>

using namespace std;

int main()
{
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    int i = 0, value;
    while(str1[i]){
        value = (int)str1[i] - (int)str2[i];
        if(!value){
            i++;
            continue;
        } else{
            break;
        }
    }
    printf("%d",value);
    return 0;
}
