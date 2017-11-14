#include <cstdio>
#include <cmath>

const double eps = 1e-8;
#define Equ(a, b) ((fabs((a) - (b))) < (eps))

int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		if (!n) {
			break;
		}
		double cost = 0.0;
		if (n <= 4) {
			cost = 10.0;
		} else if (n > 4 && n <= 8) {
			cost = 10.0 + (n- 4) * 2;
		} else {
			int eight_num = n / 8;
			int rest = n % 8;
			cost = eight_num * 18;
			if (rest < 5) { // 此处很关键
				cost += rest * 2.4;
			} else if (rest >= 5) {
				cost += 10 + (rest - 4) * 2;
			}
		}
		if (Equ(cost, floor(cost))) {
			printf("%d\n", (int)cost);
		} else {
			printf("%.1f\n", cost);
		}
	}
	return 0;
}