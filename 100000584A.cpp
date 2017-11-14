#include <cstdio>
#include <algorithm>
using namespace std;

struct tv
{
	int si, ei;
};

bool cmp(tv a, tv b)
{
	if (a.si != b.si) {
		return a.si > b.si;
	} else {
		return a.ei < b.ei;
	}
}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n == 0) {
			break;
		}
		tv t[n];
		for (int i = 0; i < n; i++) {
			scanf("%d%d", &t[i].si, &t[i].ei);
		}
		sort(t, t + n, cmp);
		int cnt = 1, Next_si = t[0].si;
		for (int i = 0; i < n; i++) {
			if (t[i].ei <= Next_si) {
				cnt++;
				Next_si = t[i].si;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}