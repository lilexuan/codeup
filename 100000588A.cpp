#include <cstdio>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int s = n * n, sum = 0, m = 1;
		bool flag = false;
		while (s) {
			int digit = s % 10;
			s /= 10;
			sum = digit * m + sum;
			m *= 10;
			if (sum == n) {
				flag = true;
				break;
			}
		}
		if (flag) {
			printf("Yes!\n");
		} else {
			printf("No!\n");
		}
	}
	return 0;
}