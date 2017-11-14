#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

struct student {
	char number[21];
	int SolveNum;
	vector<int> SolveProblem;
	int mark;
};

bool cmp(student a, student b)
{
	if (a.mark != b.mark) {
		return a.mark > b.mark;
	} else {
		return strcmp(a.number, b.number) < 0;
	}
}

int main()
{
	int N;
	while (true) {
		scanf("%d", &N);
		if (!N) {
			break;
		}
		int M, G;
		scanf("%d%d", &M, &G);
		int grade[M];
		for (int i = 0; i < M; i++) {
			scanf("%d", &grade[i]);
		}
		student s[N];
		for (int i = 0; i < N; i++) {
			s[i].mark = 0;
		}
		for (int i = 0; i < N; i++) {
			scanf("%s%d", s[i].number, &s[i].SolveNum);
			for (int j = 0; j < s[i].SolveNum; j++) {
				int tmp;
				scanf("%d", &tmp);
				s[i].SolveProblem.push_back(tmp);
			}
		}
		int cnt = 0;
		for (int j = 0; j < N; j++) {
			vector<int>::iterator it = s[j].SolveProblem.begin();
			for (;it != s[j].SolveProblem.end(); it++) {
				 s[j].mark += grade[*it - 1];
			}
			if (s[j].mark >= G) {
				cnt++;
			}
		}
		sort(s, s + N, cmp);
		printf("%d\n", cnt);
		for (int i = 0; i < N; i++) {
			if (s[i].mark >= G) {
				printf("%s %d\n", s[i].number, s[i].mark);
			}
		}
	}
	return 0;
}
