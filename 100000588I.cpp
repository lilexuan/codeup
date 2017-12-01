#include <cstdio>

int main () {
	for (int i = 1000; i <= 1111; i++) {
		bool flag = true;
		char s1[5], s2[5];
		sprintf(s1, "%d", i);
		sprintf(s2, "%d", i * 9);
		for (int i = 0; i <= 3; i++) {
			if (s1[i] != s2[3 - i]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			printf("%d\n", i);
		}
	}
	return 0;
}