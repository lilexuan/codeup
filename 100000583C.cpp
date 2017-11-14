#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		int goods[41];
		fill(goods, goods + 41, 0);
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			int tmp;
			scanf("%d", &tmp);
			goods[tmp]++;
		}
		for (int i = 1; i <= 20; i++) {
			if (goods[i] && goods[40 - i] && i != 20) {
				cnt += min(goods[i], goods[40 - i]);
			} else if (goods[i] && goods[40 - i] && i == 20) {
				cnt += goods[i] / 2;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}