#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

struct student {
	char number[7];
	char name[9];
	int mark;
};

bool cmp1(student a, student b);
bool cmp2(student a, student b);
bool cmp3(student a, student b);

int main()
{
	int cnt = 1; 
	while (1) {
		int N, C;
		scanf("%d %d", &N, &C);
		if (!N) {
			break;
		}
		student s[N];
		for (int i = 0; i < N; i++) {
			scanf("%s %s %d", s[i].number, s[i].name, &s[i].mark);
		}
		if (C == 1) {
			sort(s, s + N, cmp1);
		} else if (C == 2) {
			sort(s, s + N, cmp2);

		} else if (C == 3) {
			sort(s, s + N, cmp3);
		}
		printf("Case %d:\n", cnt);
		for (int i = 0; i < N; i++) {
			printf("%s %s %d\n", s[i].number, s[i].name, s[i].mark);
		}
		cnt++;
	}
	return 0;
}

bool cmp1(student a, student b)
{
	return strcmp(a.number, b.number) < 0;
}

bool cmp2(student a, student b)
{
	if (strcmp(a.name, b.name)) {
		return strcmp(a.name, b.name) < 0;
	} else {
		return strcmp(a.number, b.number) < 0;
	}
}

bool cmp3(student a, student b)
{
	if (a.mark != b.mark) {
		return a.mark < b.mark;
	} else {
		return strcmp(a.number, b.number) < 0;
	}
}
