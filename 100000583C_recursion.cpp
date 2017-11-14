#include <cstdio>

int f(int numbers[], int n, int now, int sum)
{
	if (sum == 0) {
		return 1;
	}
	if (now == n || sum < 0) {
		return 0;
	} 
	return f(numbers, n, now + 1, sum) + f(numbers, n, now + 1, sum - numbers[now]);
}

int main()
{
	int n; 
	while (scanf("%d", &n) != EOF) {
		int numbers[20];
		for (int i = 0; i < n; i++) {
			scanf("%d", &numbers[i]);
		}
		int cnt = f(numbers, n, 0, 40);
		printf("%d\n", cnt);
	}
	return 0;
}