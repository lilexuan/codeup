#include <cstdio>

struct money
{
	int num;
	int value;
} m[5];

const int v[5] = {50, 20, 10, 5, 1};

int main()
{

	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < 5; i++) {
			m[i].num = 0;
			m[i].value = v[i];
		}
		int i = 0;
		while (1) {
			if (n - v[i] < 0) {
				i++;
				continue;
			} else  {
				n -= v[i];
				m[i].num++;
				if (!n) {
					break;
				}
			} 
		}
		bool flag = false;
		for (int i = 0; i < 5; i++) {
			if (m[i].num) {
				if (!flag) {
					printf("%d*%d", m[i].value, m[i].num);
					flag = true;
				} else {
					printf("+%d*%d", m[i].value, m[i].num);
				}
			}
		}
		printf("\n");
	}
	return 0;
}