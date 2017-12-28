#include <cstdio>
#include <algorithm>
using namespace std;

const int MAXN = (1 << 15) + 1;
bool primeTable[MAXN];

bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void init(void) {
	fill(primeTable, primeTable + MAXN, false);
	for (int i = 2; i < MAXN; i++) {
		if (isPrime(i)) {
			primeTable[i] = true;
		}
	}
}

int main() {
	init();
	int num;
	while (scanf("%d", &num) != EOF) {
		if (!num) {
			break;
		}
		int cnt = 0;
		for (int i = 2; i <= num / 2; i++) {
			if (primeTable[i] && primeTable[num - i]) {
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}