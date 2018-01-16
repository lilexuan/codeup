#include <cstdio>
#include <cmath>

int primeNum = 0;
int prime[100000];

struct factor {
	int x;
	int cnt;
} fac[20];

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

void printPrime(void) {
	for (int i = 0; i <= 100000; i++) {
		if (isPrime(i)) {
			prime[primeNum++] = i;
		} 
	}
	return;
}

void init() {
	for (int i = 0; i < 20; i++) {
		fac[i].x = 0;
		fac[i].cnt = 0;
	}
}

int findFactor(int n) {
	int index = 0;
	int sqr = (int)sqrt(1.0 * n);
	// printf("primeNum=%d\n", primeNum);
	for (int i = 0; i < primeNum && prime[i] <= sqr; i++) {
		// printf("i=%d\n", i);
		if (n % prime[i] == 0) {
			fac[index].x = prime[i];
			while (n % prime[i] == 0) {
				fac[index].cnt++;
				n /= prime[i];
			}
		index++;
		}
	}
	if (n != 1) {
		fac[index].x = n;
		fac[index++].cnt = 1;
	}
	return index;
}

int main() {
	int n;
	printPrime();
	while (scanf("%d", &n) != EOF) {
		init();
		int index = findFactor(n);
		int sum = 0;
		for (int i = 0; i < index; i++) {
			sum += fac[i].cnt;
		}
		printf("%d\n", sum);
	}
	return 0;
}