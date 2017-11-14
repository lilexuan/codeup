#include <cstdio>
using namespace std;
struct student{
    int num;
    char name[2000];
    char sex[2000];
    int age;
};
int main()
{
    int m;
    while (scanf("%d",&m) != EOF) {
        while (m--) {
            int n;
            scanf("%d",&n);
            student s[n];
            for (int i = 0; i < n; i++) {
                scanf("%d%s%s%d",&s[i].num,s[i].name,s[i].sex,&s[i].age);
            }
            int research;
            scanf("%d",&research);
            int k;
            for (k = 0; k < n; k++) {
                if(research == s[k].num) {
                    printf("%d %s %s %d\n",s[k].num,s[k].name,s[k].sex,s[k].age);
                }
            }
        }
    }
    return 0;
}
