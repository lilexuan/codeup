#include <cstdio>
#include <vector>
using namespace std;

vector<int> primeList;

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
	for (int i = 2; i <= (1 << 17); i++) {
		if (isPrime(i)) {
			primeList.push_back(i);
		}
	}
} 

int main() {
	init();
	int n;
	// printf("please input\n");
	while (scanf("%d", &n) != EOF) {
		printf("%d\n", primeList[n - 1]);
	}
	return 0;
}