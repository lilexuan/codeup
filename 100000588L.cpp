#include <cstdio>
#include <cstring>

bool without7(int n) {
	if (n % 7 == 0) {
		return false;
	}
	char str[4];
	sprintf(str, "%d", n);
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] == '7') {
			return false;
		}
	}
	return true;
}

int main () {
	int n;
	while (scanf("%d", &n) != EOF) {
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			if (without7(i)) {
				sum += i * i;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}