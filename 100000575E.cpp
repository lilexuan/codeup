#include <cstdio>
#include <algorithm>
using namespace std;

const int MAX = 100005;
int dis[MAX], a[MAX];

int main()
{
   int N, sum = 0;
   scanf("%d",&N);
   for(int i=1;i<=N;i++){
      scanf("%d",&a[i]);
      sum += a[i];
      dis[i] = sum;
   }
   int M;
   scanf("%d",&M);
   while(M--){
      int begin,end;
      scanf("%d%d",&begin,&end);
      if(begin > end)
          swap(begin,end);
      int tmp = dis[end-1] - dis[begin-1];
      printf("%d\n",min(tmp,sum-tmp));
   }
   return 0;
}

