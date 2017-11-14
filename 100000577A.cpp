#include <cstdio>
using namespace std;
int main()
{
    int row, col, flag;
    while(scanf("%d",&row) != EOF) {
        col = row + (row - 1) * 2;
        flag = col - row;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (j < flag)
                    printf(" ");
                else
                    printf("*");
            }
            flag -= 2;
            printf("\n");
        }
    }
    return 0;
}
