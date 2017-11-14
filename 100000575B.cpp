#include <cstdio>
#include <cstring>

using namespace std;

void convert(char *a, char *b,long long *pa, long long *pb);

int main()
{
  char a[20], b[20];
  while (scanf("%s%s",a,b) != EOF){
      long long A = 0, B = 0;
      long long *pa = &A, *pb = &B;
      convert(a,b,pa,pb);
      printf("%lld\n",*pa+*pb);
  }
  return 0;
}

void convert(char *a, char *b, long long *pa, long long *pb)
{
    int a_len = strlen(a), b_len = strlen(b);
    *pa = 0;
    *pb = 0;
    int a_flag = 0, b_flag = 0;
    for(int i=a_len-1,j=1;i>=0;i--){
        if(a[i] == '-')
            a_flag = 1;
        if(a[i] != ',' && a[i] != '-'){
            *pa += (a[i] - '0') * j;
            j *= 10;
        }
    }
    if(a_flag)
        *pa = -*pa;
    for(int i=b_len-1,j=1;i>=0;i--){
        if(b[i] == '-')
            b_flag = 1;
        if(b[i] != ',' && b[i] != '-'){
            *pb += (b[i] - '0') * j;
            j *= 10;
        }
    }
    if(b_flag)
        *pb = -*pb;
    return;
}

