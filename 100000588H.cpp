#include <cstdio>

int main() {
	int m;
	while (scanf("%d", &m) != EOF) {
		while (m--) {
			int n;
			scanf("%d", &n);
			if (n >= 0) {
				int sum = 0;
				for (int i = n; i <= 2 * n; i++) {
					sum += i;
				}
				printf("%d\n", sum);
			} else {
				int sum = 0;
				for (int i = 2 * n; i <= n; i++) {
					sum += i;
				}
				printf("%d\n", sum);
			}
		}
	}
	return 0;
}