#include <cstdio>

using namespace std;

int main()
{
    int m;
    scanf("%d",&m);
    while (m--){
        int h;
        scanf("%d",&h);
        int a,b;
        a = h;
        b = a + 2 * (h - 1);
        int front, back;
        front = (b - a) / 2;
        back = front + a;
        for(int i=0;i<h;i++){
            for(int j=0;j<back;j++){
                if(j < front)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
            back++;
            front--;
        }
    }
    return 0;
}
