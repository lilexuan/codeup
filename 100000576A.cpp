#include <cstdio>

using namespace std;

int main()
{
    while (true){
        int N;
        scanf("%d",&N);
        if(!N)
            break;
        int mark[N];
        for(int i=0;i<N;i++){
            scanf("%d",&mark[i]);
        }
        int given_mark;
        scanf("%d",&given_mark);
        int count = 0;
        for(int i=0;i<N;i++){
            if(given_mark == mark[i])
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}

