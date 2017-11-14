#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	while (scanf("%d%d", &N, &M) != EOF) {
		int book[M];
		int people[N];
		fill(book, book + M, 0);
		fill(people, people + N, 0);
		for (int i = 0; i < N; i++) {
			scanf("%d", &people[i]);
			book[people[i]]++;
		}
		for (int i = 0; i < N; i++) {
			int tmp = book[people[i]] - 1;
			if (tmp) {
				printf("%d\n", tmp);
			} else {
				printf("BeiJu\n");
			}
		}
	}
	return 0;	
} 
