#include <cstdio>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		while (n--) {
			int k;
			scanf("%d", &k);
			int a[k];
			for (int i = 0; i < k; i++) {
				scanf("%d", &a[i]);
			}
			bool flag = false;
			bool flag2 = false;
			for (int i = 0; i < k; i++) {
				if (i == 0) {
					if (a[i] > a[i + 1] || a[i] < a[i + 1]) {
						if (!flag) {
							printf("%d", i);
							flag = true;
							flag2 = true;
						} else {
							printf(" %d", i);
							flag2 = true;
						}
					}
				} else if (i == k - 1) {
					if (a[i] > a[i - 1] || a[i] < a[i - 1]) {
						if (!flag) {
							printf("%d", i);
							flag = true;
							flag2 = true;
						} else {
							printf(" %d", i);
						}
					}
				} else {
					if ((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1])) {
						if (!flag) {
							printf("%d", i);
							flag = true;
							flag2 = true;
						} else {
							printf(" %d", i);
							flag2 = true;
						}
					}
				}
			}
			if (flag2) {
				printf("\n");
			}
		}
	}
	return 0;
}