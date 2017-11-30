#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cmath>
using namespace std;

int n, m;

int randPartition(int a[], int left, int right) {
	int p = round(1.0 * rand() / RAND_MAX * (right - left) + left);
	swap(a[left], a[p]);
	int temp = a[left];
	while (left < right) {
		while (left < right && a[right] > temp) {
			right--;
		}
		a[left] = a[right];
		while (left < right && a[left] <= temp) {
			left++;
		}
		a[right] = a[left];
	}
	a[left] = temp;
	return left;
}

int randSelect(int a[], int left, int right, int m) {
	if (left == right) {
		return a[left];
	}
	int p = randPartition(a, left, right);
	int k = p - left + 1;
	if (m == k) {
		return a[p];
	} else if (m < k) {
		return randSelect(a, left, p - 1, m);
	} else {
		return randSelect(a, p + 1, right, m - k);
	}
}

int main() {
	srand((unsigned)time(NULL));
	while (scanf("%d%d", &n, &m) != EOF) {
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int ans = randSelect(a, 0, n - 1, m + 1);
		printf("%d\n", ans);
	}
	return 0;
}