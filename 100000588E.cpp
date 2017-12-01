#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int a[20];
	while (scanf("%d", &a[0]) != EOF) {
		int hash[11];
		fill(hash, hash + 11, 0);
		hash[a[0]]++;
		for (int i = 1; i < 20; i++) {
			scanf("%d", &a[i]);
			hash[a[i]]++;
		}
		int ans, MaxTimes = 0;
		for (int i = 1; i <= 10; i++) {
			if (hash[i] > MaxTimes) {
				ans = i;
				MaxTimes = hash[i];
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}