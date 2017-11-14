#include <cstdio>
#include <cstring>
using namespace std;
struct student{
    char num[2220];
    char name[2220];
    char sex[2220];
    int age;
};
int main()
{
   int N;
   while(scanf("%d",&N) != EOF) {
      student s[N];
      for (int i = 0; i < N; i++) {
         scanf("%s%s%s%d", s[i].num, s[i].name, s[i].sex, &s[i].age);
      }
      int M;
      scanf("%d", &M);
      for (int i = 0; i < M; i++) {
         char tmp_num[2220];
         scanf("%s", tmp_num);
         int k;
         for (k = 0; k < N; k++) {
            if (!strcmp(tmp_num, s[k].num)) {
               printf("%s %s %s %d\n", s[k].num, s[k].name, s[k].sex, s[k].age);
               break;
            }
         }
         if (k == N)
            printf("No Answer!\n");
      }
   }
   return 0;
}
