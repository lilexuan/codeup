#include <cstdio>
#include <algorithm>
using namespace std;

struct number
{
	int value, index;
};

bool cmp(number a, number b) 
{
	return a.value < b.value;
}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		number num[n];
		int x;
		for (int i = 0; i < n; i++) {
			scanf("%d", &num[i].value);
			num[i].index = i;
		}
		scanf("%d", &x);
		sort(num, num + n, cmp);
		int left = 0, right = n - 1;
		int middle;
		bool flag = false;
		while (left <= right) {
			middle = (left + right) / 2;
			if (num[middle].value == x) {
				printf("%d\n", num[middle].index);
				flag = true;
				break;
			}
			if (num[middle].value > x) {
				right = middle - 1;
			} else {
				left = middle + 1;
			}
		}
		if (!flag) {
			printf("-1\n");
		}
	}
	return 0;
}