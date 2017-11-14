#include <cstdio>
#include <cstring>

using namespace std;

struct people{
    int num;
    char name[20];
    int m1,m2,m3;
    people(int _num, char _name[20], int _m1, int _m2, int _m3)
    {
        num = _num;
        strcpy(name,_name);
        m1 = _m1;
        m2 = _m2;
        m3 = _m3;
    }
    void print()
    {
        printf("%d %s %d %d %d\n",num,name,m1,m2,m3);
    }
};

int main()
{
    int num;
    char name[20];
    int m1,m2,m3;
    for(int i=0;i<5;i++){
        scanf("%d%s%d%d%d",&num,name,&m1,&m2,&m3);
        people p = people(num,name,m1,m2,m3);
        p.print();
    }
    return 0;
}

