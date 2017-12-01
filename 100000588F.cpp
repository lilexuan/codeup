#include <cstdio>

int main () {
	int a[2][3], b[3][2];
	while (scanf("%d%d%d", &a[0][0], &a[0][1], &a[0][2]) != EOF) {
		for (int i = 0; i < 3; i++) {
			scanf("%d", &a[1][i]);
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 2; j++) {
				scanf("%d", &b[i][j]);
			}
		}
		int c[2][2];
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				int sum = 0;
				for (int k = 0; k < 3; k++) {
					sum += a[i][k] * b[k][j];
				}
				c[i][j] = sum;
			}
		}
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				if (j) {
					printf(" ");
				}
				printf("%d", c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}