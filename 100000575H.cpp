#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int DA,DB;
    char A[20],B[20];
    while(scanf("%s%d%s%d",A,&DA,B,&DB) != EOF) {
        int PA = 0, PB = 0;
        int j = 2;
        while (j--) {
            int num;
            char string[20];
            int count = 0;
            if (j == 1) {
                num = DA;
                strcpy(string, A);
            } else {
                num = DB;
                strcpy(string, B);
            }
            for (int i = 0; i < strlen(string); i++) {
                if (string[i] - '0' == num) {
                    count++;
                }
            }
            if (j) {
                int k = 1;
                for (int i = 0; i < count; i++) {
                    PA += k * num;
                    k *= 10;
                }
            } else {
                int k = 1;
                for (int i = 0; i < count; i++) {
                    PB += k * num;
                    k *= 10;
                }
            }
        }
        printf("%d\n", PA + PB);
    }
    return 0;
}

