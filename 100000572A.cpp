#include <cstdio>
#include <cstring>

using namespace std;

struct person
{
    char name[20];
    int count;
}leader[3] = {"Li",0,"Zhang",0,"Fun",0};

int main()
{
    int n;
    scanf("%d",&n);
    char s[20];
    for(int i=0;i<n;i++){
        scanf("%s",s);
        if(!strcmp(s,leader[0].name)){
            leader[0].count++;
        } else if(!strcmp(s,leader[1].name)){
            leader[1].count++;
        } else{
            leader[2].count++;
        }
    }
    printf("Li:%d\n",leader[0].count);
    printf("Zhang:%d\n",leader[1].count);
    printf("Fun:%d\n",leader[2].count);
    return 0;
}

