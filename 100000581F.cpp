#include <cstdio>
#include <algorithm>

using namespace std;

struct mouse {
	int weight;
	char hat[20];
};

bool cmp (mouse a, mouse b)
{
	return a.weight > b.weight;
}

int main()
{
	int N;
	while (scanf("%d", &N) != EOF) {
		mouse m[N];
		for (int i = 0; i < N; i++) {
			scanf("%d %s", &m[i].weight, m[i].hat);
		}
		sort(m, m + N, cmp);
		for (int i = 0; i < N; i++) {
			printf("%s\n", m[i].hat);
		}
	}
	return 0;
}
