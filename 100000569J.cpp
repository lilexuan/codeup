#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
   char str1[20],str2[20],str3[20];
   gets(str1);
   gets(str2);
   gets(str3);
   int flag, i = 0;
   while(i != strlen(str1) && i != strlen(str2) && i != strlen(str3)){
      if(str1[i] > str2[i] && str1[i] > str3[i]){
         flag = 1;
         break;
      } else if (str2[i] > str1[i] && str2[i] > str3[i]){
         flag = 2;
         break;
      } else if (str3[i] > str1[i] && str3[i] > str2[i]){
         flag = 3;
         break;
      } else {
         i++;
      }
   }
   switch(flag){
      case 1 :
         printf("%s",str1);break;
      case 2 :
         printf("%s",str2);break;
      case 3 :
         printf("%s",str3);break;
   }
   return 0;
}
