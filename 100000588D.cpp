#include <cstdio>

bool suit(int a, int b, int c) {
	int sum = a * 100 + b * 10 + c + b * 100 + c * 10 + c;
	if (sum == 532) {
		return true;
	} else {
		return false;
	}
}

int main() {
	for (int a = 0; a <= 9; a++) {
		for (int b = 0; b <= 9; b++) {
			for (int c = 0; c <= 9; c++) {
				if (suit(a, b, c)) {
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}
	return 0;	
}