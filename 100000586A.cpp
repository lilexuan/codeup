#include <cstdio>

void merge(int a[], int n1_left, int n1_right, int n2_left, int n2_right)
{
	int tmp[n2_right-n1_left+1], p1 = n1_left, p2 = n2_left;
	int index = 0;
	while (p1 <= n1_right && p2 <= n2_right) {
		if (a[p1] <= a[p2]) {
			tmp[index] = a[p1];
			index++;
			p1++;
		} else {
			tmp[index] = a[p2];
			index++;
			p2++;
		}
	}
	while (p1 <= n1_right) {
		tmp[index] = a[p1];
		index++;
		p1++;
	}
	while (p2 <= n2_right) {
		tmp[index] = a[p2];
		index++;
		p2++;
	}
	for (int i = 0; i < index; i++) {
		a[n1_left+i] = tmp[i];
	}
}

void mergeSort(int a[], int left, int right)
{
	if (left < right) {
		int middle = (left + right) / 2;
		mergeSort(a, left, middle);
		mergeSort(a, middle+1, right);
		merge(a, left, middle, middle+1, right);
	}
}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		mergeSort(a, 0, n-1);
		for (int i = 0; i < n; i++) {
			printf("%d\n", a[i]);
		}
	}
	return 0;
}