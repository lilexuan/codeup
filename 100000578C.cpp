#include <cstdio>

using namespace std;

int isLeap(int year);

int main()
{
    int year, n;
    int month[13][2] = {
            {0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}, {31, 31}, {30, 30}, {31, 31},
            {30, 30}, {31, 31}
    };
    while (scanf("%d%d",&year, &n) != EOF) {
        int y = year, m = 1, d = 1;
        int flag = isLeap(y);
        for (int i=1;i<n;i++){
            if (d == month[m][flag]) {
                d = 1;
                m++;
            } else {
                d++;
            }
        }
        printf("%04d-%02d-%02d\n",y,m,d);
    }
    return 0;
}

int isLeap(int year)
{
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return 1;
    else
        return 0;
}
