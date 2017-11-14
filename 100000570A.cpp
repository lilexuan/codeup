#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
   char str[20];
   void reverse(char str[]);
   scanf("%s",str);
   reverse(str);
   return 0;
}

void reverse(char str[])
{
   int i = strlen(str) - 1;
   for(;i>=0;i--){
      printf("%c",str[i]);
   }
   return;
}
