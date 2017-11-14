#include <cstdio>
#include <algorithm>
using namespace std;

struct house
{
	int j, f;
	double ration;
};

bool cmp(house a, house b)
{
	return a.ration > b.ration;
}

int main()
{
	int m, n;
	while (scanf("%d%d", &m, &n) != EOF) {
		if (m == -1 && n == -1) {
			break;
		}
		house h[n];
		for (int i = 0; i < n; i++) {
			scanf("%d%d", &h[i].j, &h[i].f);
			h[i].ration = (double)h[i].j / h[i].f;
		}
		sort(h, h + n, cmp);
		double sum = 0;
		for (int i = 0; i < n; i++) {
			if ((m - h[i].f) >= 0) {
				sum += h[i].j;
				m -= h[i].f;
			} else {
				double a = (double)m / h[i].f;
				sum += a * h[i].j;
				m = 0;
				break;
			}

		}
		printf("%.3f\n", sum);
	}
	return 0;
}