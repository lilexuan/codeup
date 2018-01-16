#include <cstdio>
#include <cmath>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n == 0) {
			break;
		}
		for (int i = 0; i < n; i++) {
			int number;
			scanf("%d", &number);
			int cnt = 0;
			int sqr = (int)sqrt(1.0 * number);
			for (int j = 1; j <= sqr; j++) {
				if (number % j == 0) {
					cnt++;
				}
			}
			cnt *= 2;
			if (sqrt(1.0 * number) == (double)sqr) {
				cnt--;
			}
			printf("%d\n", cnt);
		}
	}
	return 0;
}