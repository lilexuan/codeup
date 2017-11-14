#include <cstdio>

using namespace std;

int month[13][2] = {
        {0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}, {31, 31}, {30, 30}, {31, 31},
        {30, 30}, {31, 31}
};

int isLeap(int year);

int main()
{
    int n;
    scanf("%d",&n);
    while (n--) {
        int y, m, d, t;
        scanf("%d%d%d%d", &y, &m, &d, &t);
        for (int i=0;i<t;i++) {
            if (d == month[m][isLeap(y)] && m != 12) {
                d = 1;
                m++;
            } else if (d == month[m][isLeap(y)] && m == 12) {
                d = 1;
                m = 1;
                y++;
            } else
                d++;
        }
        printf("%04d-%02d-%02d\n", y, m, d);
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
