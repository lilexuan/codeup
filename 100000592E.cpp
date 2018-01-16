#include <cstdio>
#include <vector>
using namespace std;

int main() {
	vector<int> ei, gi;
	for (int i = 2; i <= 60; i++) {
		int sum = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum == i) {
			ei.push_back(i);
		} else if (sum < i) {
			gi.push_back(i);
		}
	}
	int Lei = ei.size(), Lgi = gi.size();
	printf("E:");
	for (int i = 0; i < Lei; i++) {
		printf(" %d", ei[i]);
	}
	printf(" G:");
	for (int i = 0; i < Lgi; i++) {
		printf(" %d", gi[i]);
	}
	return 0;
}