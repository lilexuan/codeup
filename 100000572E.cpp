#include <cstdio>

struct people{
    int num;
    char name[20];
    int m1,m2,m3;
    double average;
}student[10];

int main()
{
    for(int i=0;i<10;i++) {
        scanf("%d%s%d%d%d", &student[i].num, student[i].name, &student[i].m1, &student[i].m2, &student[i].m3);
    }
    int flag;
    double max = 0.0;
    for(int i=0;i<10;i++){
        student[i].average = ((double)student[i].m1 + (double)student[i].m2 + (double)student[i].m3) / (double)3;
        if(student[i].average > max){
            max = student[i].average;
            flag = i;
        }
    }
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for(int i=0;i<10;i++){
        sum1 += student[i].m1;
        sum2 += student[i].m2;
        sum3 += student[i].m3;
    }
    double av1 = (double)sum1 / 10.0, av2 = (double)sum2 / 10.0, av3 = (double)sum3 / 10.0;
    printf("%.2lf %.2lf %.2lf\n",av1,av2,av3);
    printf("%d %s %d %d %d\n",student[flag].num,student[flag].name,student[flag].m1,student[flag].m2,student[flag].m3);
}


