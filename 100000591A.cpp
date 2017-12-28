#include <cstdio>
#include <cstring>

bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}  
	for (int i = 2; i * i <= n; i++) {
		if (n % i ==0) {
			return false;
		}
	}
	return true;
}

bool isOne(int n) {
	char str[10] = {0};
	sprintf(str, "%d", n);
	int len = strlen(str);
	if (str[len - 1] == '1') {
		return true;
	} else {
		return false;
	}
}

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		bool flag = false;
		for (int i = 2; i < n; i++) {
			if (isPrime(i) && isOne(i)) {
				if (flag) {
					printf(" ");
				}
				printf("%d", i);
				if (!flag) {
					flag = true;
				}
			}
		}
		if (!flag) {
			printf("-1\n");
		} else {
			printf("\n");
		}
	}
	return 0;
}