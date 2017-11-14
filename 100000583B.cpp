#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

long long f(long long n, vector<long long> &vi, bool IsIn[]) 
{
	if (n == 1) {
		if (!IsIn[n]) {
			vi.push_back(0);
			IsIn[n] = true;
		}
		return 0;
	}
	if (n == 2) {
		if (!IsIn[n]) {
			vi.push_back(1);
			IsIn[n] = true;
		}
		return 1;
	}
	long long tmp = f(n - 1, vi, IsIn) + f(n - 2, vi, IsIn);
	if (!IsIn[n]) {
		vi.push_back(tmp);
		IsIn[n] = true;
	}
	return tmp;
}

bool cmp(long long a, long long b)
{
	return a < b;
}

int main()
{
	int m;
	while (scanf("%d", &m) != EOF) {
		while (m--) {
			vector<long long> vi;
			int n;
			scanf("%d", &n);
			int times = 1 + (n - 1) * 2;
			int row = n, column = n;
			bool IsIn[times + 1];
			fill(IsIn, IsIn + times + 1, false);
			int sum = f(times, vi, IsIn);
			sort(vi.begin(), vi.end(), cmp);
			//test
			// printf("-------------------test-------------------\n");
			// for (vector<long long>::iterator it = vi.begin(); it != vi.end(); it++) {
			// 	printf(" %lld", *it);
			// }
			// printf("\n");
			// printf("-------------------test-------------------\n");
			for (int i = 0; i < row; i++) {
				vector<long long>::iterator it = vi.begin();
				for (int j = 1; j <= column; j++) {
					if (j != 1) {
						printf(" ");
					}
					if (j >= n - i && j <= n + i) {
						printf("%lld", *it);
						it++;
					} else {
						printf(" ");
					}
				}
				column++;
				printf("\n");
			}
		}
	}
	return 0;
}