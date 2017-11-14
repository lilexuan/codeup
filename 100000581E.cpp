#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main()
{
	int m;
	while (scanf("%d", &m) != EOF) {
	int a[m][m];
	int row[m];
	int column[m];
	for (int i = 0; i < m; i++) {
		row[i] = 0;
		column[i] = 0;
	} 
	int diag = 0, diagt = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
			row[i] += a[i][j];
			column[j] += a[i][j];
			if (i == j) {
				diag += a[i][j];
			}
			if (i + j == m - 1) {
				diagt += a[i][j];
			}
		}
	}
	if (m != 1) {
		vector<int> vi;
		for (int i = 0; i < m; i++) {
			vi.push_back(row[i]);
		}
		for (int i = 0; i < m; i++) {
			vi.push_back(column[i]);
		}
		vi.push_back(diag);
		vi.push_back(diagt);
		sort(vi.begin(), vi.end(), cmp);
		vector<int>::iterator it = vi.begin();
		for (; it != vi.end(); it++) {
			if (it != vi.begin()) {
				printf(" ");
			}
			printf("%d", *it);
		}
	} else {
		printf("%d", a[0][0]);
	}
	printf("\n");
	}
	return 0;
} 
