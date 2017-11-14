#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	int a[10];
	while (scanf("%d%d%d%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]) != EOF) {
		vector<int> odd, even;
		for (int i = 0; i < 10; i++) {
			if (a[i] % 2) {
				odd.push_back(a[i]);
			} else {
				even.push_back(a[i]);
			}
		}
		sort(odd.begin(), odd.end(), cmp);
		sort(even.begin(), even.end());
		vector<int>::iterator it_odd = odd.begin();
		vector<int>::iterator it_even = even.begin();
		for (; it_odd != odd.end(); it_odd++) {
			if (it_odd != odd.begin()) {
				printf(" ");
			}
			printf("%d", *it_odd);
		}
		for (; it_even != even.end(); it_even++) {
			printf(" %d", *it_even);
		}
		printf("\n");
	}
	return 0;	
} 
