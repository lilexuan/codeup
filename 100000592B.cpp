#include <cstdio>

bool isPerfect(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	if (n == sum) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		bool flag = false;
		for (int i = 2; i <= n; i++) {
			if (isPerfect(i)) {
				if (flag) {
					printf(" ");
				}
				printf("%d", i);
				if (!flag) {
					flag = true;
				}
			}
		}	
		printf("\n");
	}
}