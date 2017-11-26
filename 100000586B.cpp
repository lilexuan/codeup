#include <cstdio>

void merge(int a[], int L1, int R1, int L2, int R2) 
{
	int P1 = L1, P2 = L2, tmp[R2 - L1 + 1], index = 0;
	while (P1 <= R1 && P2 <= R2) {
		if (a[P1] <= a[P2]) {
			tmp[index++] = a[P1++];
		} else {
			tmp[index++] = a[P2++];
		}
	}
	while (P1 <= R1) {
		tmp[index++] = a[P1++];
	}
	while (P2 <= R2) {
		tmp[index++] = a[P2++];
	}
	for (int i = 0; i < index; i++) {
		a[L1 + i] = tmp[i];
	}
}

void mergeSort(int a[], int left, int right)
{
	if (left < right) {
		int middle = (left + right) / 2;
		mergeSort(a, left, middle);
		mergeSort(a, middle + 1, right);
		merge(a, left, middle, middle + 1, right);
	}
}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		while (n--) {
			int m;
			scanf("%d", &m);
			int a[m];
			for (int i = 0; i < m; i++) {
				scanf("%d", &a[i]);
			}
			mergeSort(a, 0, m-1);
			for (int i = 0; i < m; i++) {
				printf("%d\n", a[i]);
			}
		}
	}
	return 0;
}