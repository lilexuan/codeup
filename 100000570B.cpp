#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
   char str[20];
   scanf("%s",str);
   int len = strlen(str);
   for(int i=0;i<len;i++){
      if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
         printf("%c",str[i]);
   }
   printf("\n");
   return 0;
}
