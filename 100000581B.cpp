#include <cstdio>
#include <algorithm>

using namespace std;

int FindMax(int a[], int len);

int main()
{
	int N;
	while (scanf("%d", &N) != EOF) {
		int a[N];
		if (N != 1) {
			for (int i = 0; i < N; i++) {
				scanf("%d", &a[i]);
			}
			sort(a, a + N);
			printf("%d\n", a[N - 1]);
			for (int i = 0; i < N - 1; i++) {
				if (i) {
					printf(" ");
				}
				printf("%d", a[i]);
			}
			printf("\n"); 
		} else {
			scanf("%d", &a[0]);
			printf("%d\n", a[0]);
			printf("-1\n");
		}
	}
	return 0;
}
