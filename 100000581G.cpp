#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	while (true) {
		scanf("%d", &N);
		if (!N) {
			break;
		} 
		int a[N];
		for (int i = 0; i < N; i++) {
			scanf("%d", &a[i]);
		}
		sort(a, a + N);
		int middle;
		if (N % 2 == 1) {
			middle = a[N / 2];
		} else {
			int tmp = (N / 2 + (N - 1) / 2) / 2;
			middle = a[tmp];
		}
		printf("%d\n", middle);
	}
	return 0;
}
