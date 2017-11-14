#include <cstdio>

int chocolate(int n)
{
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}
	return chocolate(n - 1) + chocolate(n - 2);
}


int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		int number;
		number = chocolate(n);
		printf("%d\n", number);
	}
	return 0;
}