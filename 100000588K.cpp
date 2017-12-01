#include <cstdio>

int x, n;

double y(int n) {
	if (n == 0) {
		return x;
	} else {
		double temp = y(n -1); //这一步优化非常重要，否则如果不用temp提前计算的话，会递归很多次导致超时
 		return temp * 2 / (double)3 + x / ((double)3 * temp * temp);
	}
}

int main() {
	while (scanf("%d%d", &x, &n) != EOF) {
		double ans = y(n);
		printf("%.6lf\n", ans);
	}
	return 0;
}