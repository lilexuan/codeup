#include <cstdio>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) 
{
	return a < b;
}

int main()
{
	int c;
	scanf("%d", &c);
	while (c--) {
		int n, v, w;
		scanf("%d%d%d", &n, &v, &w);
		int con[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &con[i]);
		}
		sort(con , con + n, cmp);
		double now_v = 0, now_c = 0, ans_c = 0, ans_v = 0, now_mol = 0;
		for (int i = 1; i <= n; i++) {
			now_v += v;
			now_mol += con[i - 1] * v;
			now_c = now_mol / now_v;
			if (now_c > w) {
				break;
			} else {
				ans_v = now_v;
				ans_c = now_c;
			} 
		}
		printf("%d %.2f\n", (int)ans_v, ans_c / 100);
	}
	return 0;
}