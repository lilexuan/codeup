#include <cstdio>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int x = 0; x <= 100; x++) {
			for (int y = 0; y <= 100 - x; y++) {
				int z = 100 - x - y;
				double price = 5 * x + 3 * y + ((double)1 / 3 ) * z;
				if (price <= (double)n) {
					printf("x=%d,y=%d,z=%d\n", x, y, z);
				} 
			}
		}
	}
	return 0;
}