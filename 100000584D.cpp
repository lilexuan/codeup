#include <cstdio>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) 
{
	return a > b;
}

int main()
{
	int n, l;
	while (scanf("%d%d", &l, &n) != EOF) {
		int block[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &block[i]);
		}
		sort(block, block + n, cmp);
		int cnt = 0, len = 0;
		bool flag = false;
		for (int i = 0; i < n; i++) {
			len += block[i];
			cnt ++;
			if (len >= l) {
				flag = true;
				break;
			}
		}
		if (flag) {
			printf("%d\n", cnt);
		} else {
			printf("impossible\n");
		}
	}
	return 0;
}