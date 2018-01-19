#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

struct bign {
	int d[1001], len;
	bign() {
		fill(d, d + 1001, 0);
		len = 0;
	}
};

bign change(char str[]) {
	bign result;
	result.len = strlen(str);
	for (int i = 0; i < result.len; i++) {
		result.d[i] = str[result.len - i - 1] - '0';
	}
	return result;
}

bign add(bign a, bign b) {
	bign result;
	int carry = 0;
	result.len = a.len > b.len ? a.len : b.len;
	for (int i = 0; i < result.len; i++) {
		int temp = a.d[i] + b.d[i] + carry;
		result.d[i] = temp % 10;
		carry = temp / 10;
	}
	if (carry != 0) {
		result.d[result.len++] = carry;
	}
	return result;
}

void output(bign a) {
	for (int i = a.len - 1; i >= 0; i--) {
		printf("%d", a.d[i]);
	}
	printf("\n");
}

int main() {
	char str1[1001], str2[1001];
	while (scanf("%s%s", str1, str2) != EOF) {
		bign a = change(str1);
		bign b = change(str2);
		bign result = add(a, b);
		output(result);
	}
	return 0;
}