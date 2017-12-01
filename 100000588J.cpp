#include <cstdio>

int main() {
	int m;
	while (scanf("%d", &m) != EOF) {
		while (m--) {
			int n, x, sum = 0, value = 1;
			scanf("%d", &n);
			int co[n + 1];
			for (int i = 0; i <= n; i++) {
				scanf("%d", &co[i]);
			}
			scanf("%d", &x);
			for (int i = 0; i <= n; i++) {
				sum += co[i] * value;
				value *= x;
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}