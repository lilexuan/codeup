#include <cstdio>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		while (n--) {
			int a;
			scanf("%d", &a);
			if (a % 2 != 0) {
				printf("0 0\n");
			} else {
				int Min, Max;
				if (a % 4 == 0) {
					Min = a / 4;
				} else {
					int rest = a % 4, temp = a / 4;
					int temp2 = rest / 2;
					Min = temp2 + temp;
				}
				Max = a / 2;
				printf("%d %d\n", Min, Max);
			}
		}
	}
	return 0;
}