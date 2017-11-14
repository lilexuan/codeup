#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int day, year;
    char month[10];
    while (scanf("%d%s%d", &day, month, &year) != EOF) {
        int mon;
        if (!strcmp(month, "January"))
            mon = 1;
        else if (!strcmp(month, "February"))
            mon = 2;
        else if (!strcmp(month, "March"))
            mon = 3;
        else if (!strcmp(month, "April"))
            mon = 4;
        else if (!strcmp(month, "May"))
            mon = 5;
        else if (!strcmp(month, "June"))
            mon = 6;
        else if (!strcmp(month, "July"))
            mon = 7;
        else if (!strcmp(month, "August"))
            mon = 8;
        else if (!strcmp(month, "September"))
            mon = 9;
        else if (!strcmp(month, "October"))
            mon = 10;
        else if (!strcmp(month, "November"))
            mon = 11;
        else if (!strcmp(month, "December"))
            mon = 12;
        if (mon == 1 || mon == 2) {
            mon += 12;
            year--;
        }
        int Week = (day + 2 * mon + 3 * (mon + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
        switch (Week) {
            case 0: printf("Monday\n");break;
            case 1: printf("Tuesday\n");break;
            case 2: printf("Wednesday\n");break;
            case 3: printf("Thursday\n");break;
            case 4: printf("Friday\n");break;
            case 5: printf("Saturday\n");break;
            case 6: printf("Sunday\n");break;
            default: break;
        }
    }
    return 0;
}

