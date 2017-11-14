#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char a[] = "I love China!";
    int n;
    scanf("%d",&n);
    int len = strlen(a);
    for(int i=n;i<len;i++)
        printf("%c",*(a+i));
    printf("\n");
    return 0;
}
