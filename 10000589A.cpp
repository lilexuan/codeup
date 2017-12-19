#include <cstdio>

int gcd(int a, int b) {
	return !b ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
	int d = gcd(a, b);
	return a / d * b;
}

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		while (n--) {
			int m;
			scanf("%d", &m);
			int a[m];
			for (int i = 0; i < m; i++) {
				scanf("%d", &a[i]);
			}
			for (int i = 1; i < m; i++) {
				a[i] = lcm(a[i - 1], a[i]);
			}
			printf("%d\n", a[m - 1]);
		}
	}
	return 0;
}