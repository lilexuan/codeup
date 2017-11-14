#include <cstdio>

using namespace std;

int month[13] = {
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
};

class date {

public:
    int y, m, d;

//    void date(int _y, int _m, int _d)
//    {
//        y = _y;
//        m = _m;
//        d = _d;
//    }

    void plus()
    {
        if (d == month[m] && m != 12) {
            d = 1;
            m++;
        } else if (d == month[12] && m == 12) {
            d = 1;
            m = 1;
            y++;
        } else {
            d++;
        }
    }

    void output()
    {
        printf("%04d-%02d-%02d\n",y, m, d);
    }
};

int main()
{
    int n;
    date D;
    scanf("%d",&n);
    while (n--) {
        int _y, _m, _d;
        scanf("%d%d%d", &D.y, &D.m, &D.d);
        D.plus();
        D.output();
    }
    return 0;
}
