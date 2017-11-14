#include <cstdio>
#include <cstring>

using namespace std;

struct student
{
    int num;
    char name[20];
    char sex;
    int age;
    student(int _num, char _name[20], char _sex, int _age)
    {
        num = _num;
        strcpy(name,_name);
        sex = _sex;
        age = _age;
    }
};

int main()
{
    int n;
    scanf("%d",&n);
    int num,age;
    char name[20], sex;
    for(int i=0;i<n;i++){
        scanf("%d%s %c%d",&num,name,&sex,&age);
        student s = student(num,name,sex,age);
        printf("%d %s %c %d\n",num,name,sex,age);
    }
    return 0;
}

