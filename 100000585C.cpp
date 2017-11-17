#include <cstdio>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
	return a < b;
}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int m;
		scanf("%d", &m);
		int b[m];
		for (int i = 0; i < m; i++) {
			scanf("%d", &b[i]);
		}
		sort(a, a + n, cmp);
		for (int i = 0; i < m; i++) {
			int target = b[i];
			int left = 0, right = n - 1, middle;
			bool flag = false;
			while (left <= right) {
				middle = (left + right) / 2;
				if (a[middle] == target) {
					flag = true;
					break;
				}
				if (a[middle] > target) {
					right = middle - 1;
				}
				if (a[middle] < target) {
					left = middle + 1;
				}
			}
			if (flag) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}
		}
	}
	return 0;
}