#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
   int L,M;
   while(true){
      scanf("%d%d",&L,&M);
      int a,b;
      if(M == 0 || L == 0){
         break;
      } else {
         int t[L+1];
         memset(t,0,sizeof(t));
         while(M--) {
            scanf("%d%d", &a, &b);
            for (int i = a; i <= b; i++) {
               t[i] = 1;
            }
         }
         int count = 0;
         for(int i=0;i<L+1;i++){
            if(!t[i])
               count++;
         }
         printf("%d\n",count);
      }
   }
   return 0;
}

