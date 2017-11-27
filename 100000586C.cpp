#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

int Partition(int a[], int left, int right)
{
	int pos = round(1.0 * rand() / RAND_MAX * (right - left) + left);
	swap(a[pos], a[left]);
	int temp = a[left];
	while (left < right) {
		while (left < right && a[right] > temp) { // 先处理right指针，不然会错误, 原因暂时不明，先记着吧。。。。
			right--;
		}
		a[left] = a[right];
		while (left < right && a[left] <= temp) {
			left++;
		}
		a[right] = a[left];
	}
	a[left] = temp;
	return left;
}

void QuickSort(int a[], int left, int right)
{
	if (left < right) {
		int pos = Partition(a, left, right);
		QuickSort(a, left, pos - 1);
		QuickSort(a, pos + 1, right);
	}
}

int main()
{
	int n;
	srand((unsigned)time(NULL));
	while (scanf("%d", &n) != EOF) {
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		QuickSort(a, 0, n - 1);
		for (int i = 0; i < n; i++) {
			printf("%d\n", a[i]);
		}
	}
	return 0;
}