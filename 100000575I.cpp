#include <cstdio>

using namespace std;

int main()
{
   int N;
   scanf("%d",&N);
   int result_A[3] = {0};//0 for win,1 for p, 2 for lose
   int result_B[3] = {0};
   int flag_A[3] = {0}; // 0 for B, 1 for C, 2 for J
   int flag_B[3] = {0};
   while (N--){
      char A,B;
      scanf("\n%c %c",&A,&B);
      if(A == 'C'){
         if(B == 'C'){
            result_A[1]++;
            result_B[1]++;
         } else if(B == 'B'){
            result_A[2]++;
            result_B[0]++;
            flag_B[0]++;
         } else if(B == 'J'){
            result_A[0]++;
            result_B[2]++;
            flag_A[1]++;
         }
      } else if(A == 'B'){
         if(B == 'C'){
            result_A[0]++;
            result_B[2]++;
            flag_A[0]++;
         } else if(B == 'B'){
            result_A[1]++;
            result_B[1]++;
         } else if(B == 'J'){
            result_A[2]++;
            result_B[0]++;
            flag_B[2]++;
         }
      } else if(A == 'J'){
         if(B == 'C'){
            result_A[2]++;
            result_B[0]++;
            flag_B[1]++;
         } else if(B == 'B'){
            result_A[0]++;
            result_B[2]++;
            flag_A[2]++;
         } else if(B == 'J'){
            result_A[1]++;
            result_B[1]++;
         }
      }
   }
   printf("%d %d %d\n",result_A[0],result_A[1],result_A[2]);
   printf("%d %d %d\n",result_B[0],result_B[1],result_B[2]);
   if(flag_A[0] >= flag_A[1] && flag_A[0] >= flag_A[2])
      printf("B ");
   else if (flag_A[1] >= flag_A[0] && flag_A[1] >= flag_A[2])
      printf("C ");
   else if (flag_A[2] >= flag_A[0] && flag_A[2] >= flag_A[1])
      printf("J ");
   if(flag_B[0] >= flag_B[1] && flag_B[0] >= flag_B[2])
      printf("B\n");
   else if (flag_B[1] >= flag_B[0] && flag_B[1] >= flag_B[2])
      printf("C\n");
   else if (flag_B[2] >= flag_B[0] && flag_B[2] >= flag_B[1])
      printf("J\n");
   return 0;
}

