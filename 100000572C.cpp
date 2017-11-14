#include <cstdio>
#include <cstring>

using namespace std;

struct people{
    int num;
    char name[10];
    char sex;
    char job;
    union{
        int cls;
        char position[10];
    }category;
};

int main()
{
    int n, num;
    scanf("%d",&n);
    char sex, job, name[20];
    union{
        int cls;
        char position[18];
    }category;
    for(int i=0;i<n;i++) {
        scanf("%d%s %c %c", &num, name, &sex, &job);
        people p;
        p.num = num;
        strcpy(p.name, name);
        p.sex = sex;
        p.job = job;
        printf("%d %s %c %c ",p.num,p.name,p.sex,p.job);
        if (job == 's') {
            scanf("%d", &p.category.cls);
            printf("%d\n",p.category.cls);
        } else if (job == 't') {
            scanf("%s", p.category.position);
            printf("%s\n",p.category.position);
        }
    }
    return 0;
}
