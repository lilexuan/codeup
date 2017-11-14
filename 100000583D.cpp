#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int queen_num = 8, p[11];
bool HashTable[11];
vector<int> vi;
// int cnt = 0;

void queen(int index)
{
	if (index == queen_num + 1) {
		int sum = 0;
		int tmp = 1E7; 
		for (int i = 1; i <= queen_num; i++) {
			sum += p[i] * tmp; 
			tmp /= 10;
		}
		vi.push_back(sum);
		// for (int i = 1; i <= queen_num; i++) {
		// 	printf("shuzu=%d", p[i]);
		// }
		// printf("\n");
		// printf("zhengshu=%d\n", sum);
		// cnt++;
		// printf("%d\n", cnt);
		return;
	}
	for (int i = 1; i <= queen_num; i++) {
		if (!HashTable[i]) {
			bool flag = true;
			for (int j = 1; j < index; j++) {
				if (abs(index - j) == abs(i - p[j])) {
					flag = false;
					// printf("yes\n");
					break;
				}
 			}
 			if (flag) {
 				p[index] = i;
 				HashTable[i] = true;
 				queen(index + 1);
 				HashTable[i] = false;
 			}
 		}
	}
} 

bool cmp(int a, int b)
{
	return a < b;
}

int main()
{
	int n;
	fill(HashTable, HashTable + 11, false);
	queen(1);
	sort(vi.begin(), vi.end(), cmp);
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			int tmp;
			scanf("%d", &tmp);
			printf("%d\n", vi[tmp - 1]);
		}
	}
	return 0;
}