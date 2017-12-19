#include <cstdio>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (!n) {
			break;
		}
		double sum = 1, now = 1;
		for (int i = 2; i <= n; i++) {
			now = now + (double)1 / i;
			sum += now;
		}
		sum = (sum - n) * 2 + n;
		printf("%.2lf\n", sum);
	}
	return 0;
}